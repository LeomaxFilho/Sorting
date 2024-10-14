Exec = ./quickSort 
DIR = instancias-num/


# Compila o arquivo completo
all: quickSort # Dependencia para a target
	@echo Compilando...
	@g++ quickSort.o main.cc -o quickSort

#Gera o arquivo binario o MergeSort
quickSort:
	@g++ -c quickSort.cc

run_1000_1:
	@echo Executando...
	@$(Exec) $(DIR)num.1000.1.in

run_1000_2:
	@echo Executando...
	@$(Exec) $(DIR)num.1000.2.in

run_1000_3:
	@echo Executando...
	@$(Exec) $(DIR)num.1000.3.in

run_1000_4:
	@echo Executando...
	@$(Exec) $(DIR)num.1000.4.in

run_10000_1:
	@echo Executando...	
	@$(Exec) $(DIR)num.10000.1.in

run_10000_2:
	@echo Executando...
	@$(Exec) $(DIR)num.10000.2.in

run_10000_3:
	@echo Executando...
	@$(Exec) $(DIR)num.10000.3.in

run_10000_4:
	@echo Executando...
	@$(Exec) $(DIR)num.10000.4.in

run_100000_1:
	@echo Executando...
	@$(Exec) $(DIR)num.100000.1.in

run_100000_2:
	@echo Executando...
	@$(Exec) $(DIR)num.100000.2.in

run_100000_3:
	@echo Executando..
	@$(Exec) $(DIR)num.100000.3.in

run_100000_4:
	@echo Executando...
	@$(Exec) $(DIR)num.100000.4.in

clean:
	@echo Limpando Arquivos...
	@rm quickSort.o quickSort

clear: 
	@echo Limpando Terminal
	@clear