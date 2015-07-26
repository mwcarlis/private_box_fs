CXX = g++
CXXFLAGS = -Wall -g

CRYPTO_DIR = ./cryptopp562
CRYPT_LIB = libcryptopp.a
CRYPTO_LIB_PATH = $(CRYPTO_DIR)/$(CRYPT_LIB)

LIBS = -L$(CRYPTO_DIR) -lcryptopp -pthread
SOURCES = private_box_fs.cpp
RUNNABLE = private_box_fs.run


.PHONY: private_fs
private_fs: $(RUNNABLE)

$(RUNNABLE): crypto
	$(CXX) -o $@ $(SOURCES) $(LIBS)
	@echo "Built the private box filesystem."

.PHONY: crypto
crypto: $(CRYPTO_LIB_PATH)

$(CRYPTO_LIB_PATH):
	@cd $(CRYPTO_DIR); \
	pwd; \
	$(MAKE) $(CRYPT_LIB); \
	cd ..
	@echo "Built Crypto Libraries"

.PHONY: clean
clean: clean_crypto
	rm -f $(RUNNABLE)

.PHONY: clean_crypto
clean_crypto:
	@cd $(CRYPTO_DIR); \
	pwd; \
	$(MAKE) clean; \
	cd ..
	

