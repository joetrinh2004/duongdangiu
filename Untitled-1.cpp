#include<stdio.h>
int hospitalfee( int noitru, int ngayo, int phauthuat, int thuoc, char s2, char s1[30]){
    int noitru1;
    int tong;
  noitru1= noitru*ngayo;
  tong=(noitru1 + phauthuat + thuoc);
  return noitru1;}