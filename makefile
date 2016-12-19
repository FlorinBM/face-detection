build:
	g++ -std=c++11 cub.cpp -o rez -Wall -lopencv_objdetect -lopencv_features2d -lopencv_imgproc -lopencv_highgui -lopencv_core -lGL -lGLU -lglut
run:
	./rez
clear:
	rm rez