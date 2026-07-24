CC = g++

SRC := .\src
INC := .\inc
OBJ := .\obj
BIN := .\bin

$(BIN)\Calc.exe:  $(OBJ)\main.o $(OBJ)\Calc.o
	$(CC) -o $(BIN)\Calc.exe $(OBJ)\main.o $(OBJ)\Calc.o


$(OBJ)\main.o:  $(SRC)\main.cpp
	$(CC) -c -o $(OBJ)\main.o $(SRC)\main.cpp -I $(INC)\

$(OBJ)\Calc.o:  $(SRC)\Calc.cpp
	$(CC) -c -o $(OBJ)\Calc.o $(SRC)\Calc.cpp -I $(INC)\

clean:
	echo "Cleaning in Progress"
	del $(OBJ)\main.o
	del $(OBJ)\Calc.o
	del $(BIN)\Calc.exe
	echo "Cleaning Done!"

