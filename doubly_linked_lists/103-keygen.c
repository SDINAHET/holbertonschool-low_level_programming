#include <stdio.h>
#include <string.h>
#include <openssl/md5.h>

/* Fonction pour calculer le hash MD5 */
void md5_hash(const char *str, unsigned char output[MD5_DIGEST_LENGTH]) {
    MD5_CTX md5;
    MD5_Init(&md5);
    MD5_Update(&md5, str, strlen(str));
    MD5_Final(output, &md5);
}

/* Fonction pour imprimer le hash MD5 en format hexadécimal */
void print_md5(const unsigned char *digest) {
    unsigned int i;
    for (i = 0; i < MD5_DIGEST_LENGTH; i++) {
        printf("%02x", digest[i]);
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    char input_string[256];
    unsigned char digest[MD5_DIGEST_LENGTH];

    if (argc != 2) {
        fprintf(stderr, "Usage: %s username\n", argv[0]);
        return 1;
    }

    /* Format de la chaîne d'entrée, par exemple "username1234" */
    snprintf(input_string, sizeof(input_string), "%s1234", argv[1]);

    md5_hash(input_string, digest);

    printf("Generated Key: ");
    print_md5(digest);

    return 0;
}
