#include<string>
using namespace std;
string numchange(int kind){
  if(kind==1) return "m1";
  if(kind==2) return "m2";
  if(kind==3) return "m3";
  if(kind==4) return "m4";
  if(kind==5) return "m5";
  if(kind==6) return "m6";
  if(kind==7) return "m7";
  if(kind==8) return "m8";
  if(kind==9) return "m9";
  if(kind==11) return "p1";
  if(kind==12) return "p2";
  if(kind==13) return "p3";
  if(kind==14) return "p4";
  if(kind==15) return "p5";
  if(kind==16) return "p6";
  if(kind==17) return "p7";
  if(kind==18) return "p8";
  if(kind==19) return "p9";
  if(kind==21) return "s1";
  if(kind==22) return "s2";
  if(kind==23) return "s3";
  if(kind==24) return "s4";
  if(kind==25) return "s5";
  if(kind==26) return "s6";
  if(kind==27) return "s7";
  if(kind==28) return "s8";
  if(kind==29) return "s9";
  if(kind==31) return "tn";
  if(kind==32) return "nn";
  if(kind==33) return "sy";
  if(kind==34) return "pe";
  if(kind==35) return "hk";
  if(kind==36) return "ht";
  if(kind==37) return "ch";
};
int haichange(string hai){
  if(hai=="m1") return 1;
  if(hai=="m2") return 2;
  if(hai=="m3") return 3;
  if(hai=="m4") return 4;
  if(hai=="m5") return 5;
  if(hai=="m6") return 6;
  if(hai=="m7") return 7;
  if(hai=="m8") return 8;
  if(hai=="m9") return 9;
  if(hai=="p1") return 11;
  if(hai=="p2") return 12;
  if(hai=="p3") return 13;
  if(hai=="p4") return 14;
  if(hai=="p5") return 15;
  if(hai=="p6") return 16;
  if(hai=="p7") return 17;
  if(hai=="p8") return 18;
  if(hai=="p9") return 19;
  if(hai=="s1") return 21;
  if(hai=="s2") return 22;
  if(hai=="s3") return 23;
  if(hai=="s4") return 24;
  if(hai=="s5") return 25;
  if(hai=="s6") return 26;
  if(hai=="s7") return 27;
  if(hai=="s8") return 28;
  if(hai=="s9") return 29;
  if(hai=="tn") return 31;
  if(hai=="nn") return 32;
  if(hai=="sy") return 33;
  if(hai=="pe") return 34;
  if(hai=="hk") return 35;
  if(hai=="ht") return 36;
  if(hai=="ch") return 37;
  else return 38;
}; 