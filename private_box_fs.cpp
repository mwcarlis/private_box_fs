#include <iostream>
#include <cstring>
#include "private_box_fs.hpp"
#include "./cryptopp562/default.h"
using namespace std;

namespace private_box_fs_carlis {
	private_box_fs::private_box_fs() {
		cout << "Hello World" << endl;
		num_files = 0;
	}

	void private_box_fs::open() {
		cout << "Hello Open()" << endl;
	}

	void private_box_fs::close() {
		cout << "Hello Close()" << endl;
	}
} /* END 'namespace private_box_fs_carlis' */

//namespace private_box_crypto {

string  encrypt_string(const char *instr, const char *pass_phrase) {
	string out_str;
	DefaultEncryptorWithMAC encryptor(pass_phrase, new HexEncoder(new StringSink(out_str)));
	encryptor.Put((byte *) instr, strlen(instr));
	encryptor.MessageEnd();
	return out_str;
}

string decrypt_string(const char *instr, const char *pass_phrase) {
	string out_str;
	HexDecoder decryptor(new DefaultDecryptorWithMAC(pass_phrase, new StringSink(out_str)));
	decryptor.Put((byte *) instr, strlen(instr));
	decryptor.MessageEnd();
	return out_str;
}

//} // END 'namespace private_box_crypto' 

int main(void) 
{
	cout << "It's working?" << endl;
	private_box_fs_carlis::private_box_fs my_box;
	my_box.open();
	my_box.close();
	return 0;
}



