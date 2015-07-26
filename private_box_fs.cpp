#include "private_box_fs.hpp"

#include <iostream>
#include <cstring>

#include "./cryptopp562/default.h"
#include "./cryptopp562/hex.h"

namespace private_box_fs_carlis {
    private_box_fs::private_box_fs() {
        std::cout << "Hello World" << std::endl;
        num_files = 0;
    }

    void private_box_fs::open() {
        std::cout << "Hello Open()" << std::endl;
    }

    void private_box_fs::close() {
        std::cout << "Hello Close()" << std::endl;
    }
} // namespace private_box_fs_carlis

std::string encrypt_string(const char *instr, const char *pass_phrase) {
    std::string out_str;
    CryptoPP::DefaultEncryptorWithMAC encryptor(pass_phrase,
                new CryptoPP::HexEncoder(new CryptoPP::StringSink(out_str)));
    encryptor.Put((byte *) instr, strlen(instr));
    encryptor.MessageEnd();
    return out_str;
}

std::string decrypt_string(const char *instr, const char *pass_phrase) {
    std::string out_str;
    CryptoPP::HexDecoder decryptor(new CryptoPP::DefaultDecryptorWithMAC(pass_phrase,
                new CryptoPP::StringSink(out_str)));
    decryptor.Put((byte *) instr, strlen(instr));
    decryptor.MessageEnd();
    return out_str;
}

int main(void) {
    //private_box_fs_carlis::private_box_fs my_box;
    std::string cypher_text;
    std::string message;
    std::string ret_message;
    std::cout << "Enter a string: ";
    std::getline(std::cin, message);
    cypher_text = encrypt_string(message.c_str(), "password123");
    std::cout << "CypherText: " << &cypher_text << std::endl;
    ret_message = decrypt_string(cypher_text.c_str(), "password123");
    std::cout << "DecodedMessage: " << ret_message << std::endl;
    //my_box.open();
    //my_box.close();
    return 0;
}


