#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int num2[100],num3[100];
	char random[100];
	char all_state[1000];
	char time, date[4000], president[8][4000], state[4000];
	FILE*fp;
	char line[4500];
	int i=0;
	int Hil_in_F=0,Hil_in_I=0,Hil_in_W=0,Hil_in_M=0,Hil_in_N=0,Hil_in_S=0;
	int Don_in_F=0,Don_in_I=0,Don_in_W=0,Don_in_M=0,Don_in_N=0,Don_in_S=0;
	int Nam_in_F=0,Nam_in_I=0,Nam_in_W=0,Nam_in_M=0,Nam_in_N=0,Nam_in_S=0;;

	fp = fopen("D:\\dataset.txt", "r");
	
	for(i=0;i<=4 ;i++){
		fscanf(fp,"%s%s", &random[i], &random[i+1]);
	}
	
	
	for(i=0;i<=6 ;i++){
		fscanf(fp,"%s%d%d", &all_state[i], &num2[i], &num3[i]);
	}


	
	while (fgetc(fp) != EOF) {
	fgets(line,4500,fp);
	//printf(line);
	
	if (strstr(line, "Hil4ry")!=NULL){
	
	if (strstr(line, "FL")!=NULL ){
	Hil_in_F= Hil_in_F+1;
	}
	if (strstr(line, "IN")!=NULL ){
	Hil_in_I= Hil_in_I+1;
	
	}
	if (strstr(line, "WA")!=NULL ){
	Hil_in_W= Hil_in_W+1;
	}
	if (strstr(line, "MT")!=NULL ){
	Hil_in_M= Hil_in_M+1;
	
	}
	if (strstr(line, "NE")!=NULL ){
	Hil_in_N= Hil_in_N+1;
	}
	if (strstr(line, "SA")!=NULL ){
	Hil_in_S= Hil_in_S+1;
	
	}
	}
	
	
	
	if (strstr(line, "D0n41d")!=NULL){
	if (strstr(line, "FL")!=NULL ){
	Don_in_F= Don_in_F+1;
	}
	if (strstr(line, "IN")!=NULL ){
	Don_in_I= Don_in_I+1;
	
	}
	if (strstr(line, "WA")!=NULL ){
	Don_in_W= Don_in_W+1;
	}
	if (strstr(line, "MT")!=NULL ){
	Don_in_M= Don_in_M+1;
	
	}
	if (strstr(line, "NE")!=NULL ){
	Don_in_N= Don_in_N+1;
	}
	if (strstr(line, "SA")!=NULL ){
	Don_in_S= Don_in_S+1;
	
	}
	
	}
	
	if (strstr(line, "Nameless")!=NULL){
	
	if (strstr(line, "FL")!=NULL ){
	Nam_in_F= Nam_in_F+1;
	}
	if (strstr(line, "IN")!=NULL ){
	Nam_in_I= Nam_in_I+1;
	
	}
	if (strstr(line, "WA")!=NULL ){
	Nam_in_W= Nam_in_W+1;
	}
	if (strstr(line, "MT")!=NULL ){
	Nam_in_M= Nam_in_M+1;
	
	}
	if (strstr(line, "NE")!=NULL ){
	Nam_in_N= Nam_in_N+1;
	}
	if (strstr(line, "SA")!=NULL ){
	Nam_in_S= Nam_in_S+1;
	
	}
	
	}


	}
	
	
	float all_H_V =Hil_in_F*num3[0]/num2[0] + Hil_in_I*num3[1]/num2[1] +Hil_in_W*num3[2]/num2[2]+ Hil_in_M*num3[3]/num2[3]+ Hil_in_N*num3[4]/num2[4]+ Hil_in_S*num3[5]/num2[5];
	float all_D_V =Don_in_F*num3[0]/num2[0] + Don_in_I*num3[1]/num2[1] +Don_in_W*num3[2]/num2[2]+ Don_in_M*num3[3]/num2[3]+ Don_in_N*num3[4]/num2[4]+ Don_in_S*num3[5]/num2[5];
	float all_N_V =Nam_in_F*num3[0]/num2[0] + Nam_in_I*num3[1]/num2[1] +Nam_in_W*num3[2]/num2[2]+ Nam_in_M*num3[3]/num2[3]+ Nam_in_N*num3[4]/num2[4]+ Nam_in_S*num3[5]/num2[5];
	
	
	if (all_H_V > all_D_V){
	printf("Hil4ry Wins!");
	}
	else{
	printf("DOn4ld Wins!");
	}


	fclose(fp);

	return 0;

}