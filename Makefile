
CXXFLAGS = -DNDEBUG -g -O2 -march=native -pipe
CXX = g++

CRYPTO562_DIR = ./cryptopp562
CRYPTO562 = $(CRYPTO562_DIR)/libcryptopp.a $(CRYPTO562_DIR)/default.o
LIBS = $(CRYPTO562) private_box_fs.o
LDFLAGS = -pthread
PRIVATE_BOX = private_box_fs.cpp

private_box_fs.exe: $(LIBS)
	$(CXX) -o $@ $(CXXFLAGS) $(LIBS) $(LDFLAGS)

./cryptopp562/libcryptopp.a:
	cd cryptopp562; \
	pwd; \
	$(MAKE) libcryptopp.a; \
	cd ..


private_box_fs.o: $(PRIVATE_BOX)
	g++ -o private_box.exe -DNDEBUG -g -O2 -march=native -fpic -pipe ./cryptopp562/libcryptopp.a -pthread

clean:
	cd cryptopp562; \
	pwd; \
	$(MAKE) clean; \
	cd ..
	pwd
	rm private_box_fs.o

#$(CXX) -DNDEBUG -g -O2 -march=native -pipe -c private_box_fs.cpp
# bench.o bench2.o test.o validat1.o validat2.o validat3.o adhoc.o datatest.o regtest.o fipsalgt.o dlltest.o

