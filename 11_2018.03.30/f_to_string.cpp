#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include "f_to_string.h"
#include "NumberToString.h"

std::string f_to_string(int in){
	std::string out="";
	if ((in<10) && (in>=0)){
		std::string tmp1="000";
		std::string tmp2=NumberToString(in);
		std::string tmp3=tmp1+tmp2;
		out=tmp3;
	}
	else {
		if ((in>9) && (in<100)){
		std::string tmp1="00";
		std::string tmp2=NumberToString(in);
		out=tmp1+tmp2;
	}
	else {
	if ((in>99) && (in<1000)){
		std::string tmp1="0";
		std::string tmp2=NumberToString(in);
		out=tmp1+tmp2;
	}
	else {
		std::string tmp2=NumberToString(in);
		out=tmp2;
	};};};
	return out;
};
