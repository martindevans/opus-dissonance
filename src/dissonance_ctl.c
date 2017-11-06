#ifdef HAVE_CONFIG_H
	#include "config.h"
#endif

#include "opus.h"

#ifdef __cplusplus
extern "C" {
#endif

	OPUS_EXPORT int dissonance_opus_encoder_ctl_in(OpusEncoder *encoder, int request, int value) {
		return opus_encoder_ctl(encoder, request, value);
	}

	OPUS_EXPORT int dissonance_opus_encoder_ctl_out(OpusEncoder *encoder, int request, int *value) {
		return opus_encoder_ctl(encoder, request, value);
	}

	OPUS_EXPORT int dissonance_opus_decoder_ctl_in(OpusDecoder *decoder, int request, int value) {
		return opus_decoder_ctl(decoder, request, value);
	}

	OPUS_EXPORT int dissonance_opus_decoder_ctl_out(OpusDecoder *decoder, int request, int *value) {
		return opus_decoder_ctl(decoder, request, value);
	}

#ifdef __cplusplus
}
#endif