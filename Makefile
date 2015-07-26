CXX = g++
CXXFLAGS = -Wall -g

CRYPTO562_DIR = ./cryptopp562

LIBS = -L$(CRYPTO562_DIR) -lcryptopp -pthread
SOURCES = private_box_fs.cpp

private_box_fs:
	$(CXX) -o $@ $(SOURCES) $(LIBS)

clean:
	rm private_box_fs