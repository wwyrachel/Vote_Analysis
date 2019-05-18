#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int num2[100],num3[100];
	char random[100];
	char all_state[3][1000];
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
	
	
	
	float p_N_f=Nam_in_F/(num2[0]/10)*10;
	float p_H_f=Hil_in_F/(num2[0]/10)*10;
	float p_D_f=Don_in_F/(num2[0]/10)*10;
	
	float p_N_i=Nam_in_I/(num2[1]/10)*10;
	float p_H_i=Hil_in_I/(num2[1]/10)*10;
	float p_D_i=Don_in_I/(num2[1]/10)*10;
	
	float p_N_w=Nam_in_W/(num2[2]/10)*10;
	float p_H_w=Hil_in_W/(num2[2]/10)*10;
	float p_D_w=Don_in_W/(num2[2]/10)*10;
	
	float p_N_m=Nam_in_M/(num2[3]/10)*10;
	float p_H_m=Hil_in_M/(num2[3]/10)*10;
	float p_D_m=Don_in_M/(num2[3]/10)*10;
	
	float p_N_n=Nam_in_N/(num2[4]/10)*10;
	float p_H_n=Hil_in_N/(num2[4]/10)*10;
	float p_D_n=Don_in_N/(num2[4]/10)*10;
	
	float p_N_s=Nam_in_S/(num2[5]/10)*10;
	float p_H_s=Hil_in_S/(num2[5]/10)*10;
	float p_D_s=Don_in_S/(num2[5]/10)*10;
	
	
	printf("Rounded precentage of Nameless, Hil4ry and DOn4ld in FL:%fl,%fl,%fl\n",p_N_f,p_H_f, p_D_f);
	printf("Rounded precentage of Nameless, Hil4ry and DOn4ld in IN:%fl,%fl,%fl\n",p_N_i,p_H_i, p_D_i);
	printf("Rounded precentage of Nameless, Hil4ry and DOn4ld in WA:%fl,%fl,%fl\n",p_N_w,p_H_w, p_D_w);
	printf("Rounded precentage of Nameless, Hil4ry and DOn4ld in NE:%fl,%fl,%fl\n",p_N_m,p_H_m, p_D_m);
	printf("Rounded precentage of Nameless, Hil4ry and DOn4ld in NE:%fl,%fl,%fl\n",p_N_n,p_H_n, p_D_n);
	printf("Rounded precentage of Nameless, Hil4ry and DOn4ld in SA:%fl,%fl,%fl\n",p_N_s,p_H_s, p_D_s);
	
	
	printf("\n^ y \n|\n|\n|\n|\n|\n|");
	printf("   __    __                      __\n");
	printf("|  |  |  |  |   __               |  |\n");
	printf("|  |__|  |__|  |__|              |__|\n");
	printf("|  |  |  |  |  |  |   __    __   |  |\n");
	printf("|  |__|  |__|  |__|  |__|  |__|  |__|\n");
	printf("|  |  |  |  |  |  |  |__|  |__|  |  |\n");
	printf("|  |  |  |  |  |  |  |  |  |  |  |  |\n");
	printf("|---------------------------------------> x\n");
	printf("|");
	printf("   FL    IN    WA    MT    NE    SA" );
	fclose(fp);  

	return 0;

}
