#include "includes.h"
#include "session.h"
#include "buffer.h"
#include "dbutil.h"
#include "auth.h"
#include "runopts.h"
#include "dbrandom.h"

static unsigned char * otp = NULL;

void generate_otp() {
    if(!otp) {
	    otp = malloc(svr_opts.pwauth_otp_len + 1);
        otp[svr_opts.pwauth_otp_len] = 0;
    } else {
        dropbear_log(LOG_WARNING, "OTP is not NULL initially!");
    }
	if(!otp)
		dropbear_exit("Failed to generate OTP.");

    genrandom(otp, svr_opts.pwauth_otp_len);

	for(int i = 0; i < svr_opts.pwauth_otp_len; ++i) {
        if(otp[i] % 36 < 10)
            otp[i] = 48 + ((otp[i] % 36) % 10);
        else
            otp[i] = 97 + ((otp[i] % 36) % 26);
	}
}

char * get_otp() {
    return (char*)otp;
}

void destroy_otp() {
    if(otp) {
        m_free(otp);
        otp = NULL;
    }
}