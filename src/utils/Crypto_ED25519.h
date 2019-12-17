#ifndef CRYPTO_ED25519_H
#define CRYPTO_ED25519_H

#include "x25519_sizes.h"
#define uint8_t unsigned char

/** An Ed25519 signature. */
typedef struct ed25519_signature_t {
    uint8_t sig[ED25519_SIG_LEN];
} ed25519_signature_t;

/** An Ed25519 public key */
typedef struct ed25519_public_key_t {
    uint8_t pubkey[ED25519_PUBKEY_LEN];
} ed25519_public_key_t;


#endif // CRYPTO_ED25519_H
