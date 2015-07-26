CXX = g++
CXXFLAGS = -Wall -g

CRYPTO_DIR = ./cryptopp562
CRYPTO_LIB = $(CRYPTO_DIR)/libcryptopp.a

LIBS = -L$(CRYPTO_DIR) -lcryptopp -pthread
SOURCES = private_box_fs.cpp

private_box_fs: crypto
	$(CXX) -o $@ $(SOURCES) $(LIBS)

crypto: $(CRYPTO_LIB)
	@echo "Built Crypto Libraries"

$(CRYPTO_LIB):
	@cd cryptopp562; \
	pwd; \
	$(MAKE) libcryptopp.a; \
	cd ..

clean: clean_crypto
	rm -f private_box_fs

clean_crypto:
	@cd cryptopp562; \
	pwd; \
	$(MAKE) clean; \
	cd ..
	
