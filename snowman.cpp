
#include <iostream>
#include <string>
#include <vector>
//#include <stdio.h>

#include "snowman.hpp"
#include <stdexcept>

using namespace std;
namespace ariel
{
  string snowman(int snownum)
  {
    const int truesize = 8;
    const int size5 = 5;
    const int size6= 6;
    const int size7 = 7;
    string snow;
    
    vector<int> ans = splitdigit(snownum);
    for (int i = 0; i < ans.size(); i++)
    {
      if (ans.size() != truesize || ans[i] > 4|| ans[i] <= 0 )
      {
        throw invalid_argument("recive error input");
        // return "";

        // cout<<" bat input"<< snow;
      }
    }

    // cout<<ans[0]<<endl;
    if (ans[0] == 1)
    {
     snow+="_===_\n";
    // cout<<"_===_"<<endl;
     //snow+="_===_ " ;
    }
    if (ans[0] == 2)
    {
       snow += " ___ \n";
       snow +=" ..... ";
     // snow+=" ___ " ;
     // snow+=" ..... " ;
    }
    if (ans[0] == 3)
    {
      snow+= "   _  \n";
      snow+="  /_\\ \n";
     // snow+="   _  " ;
     // snow+="  /_\\ " ;
    }
    if (ans[0] == 4)
    {
      snow+=" ___ \n";
      snow+="(_*_)";
      //snow+=" ___ " ;
      //snow+="(_*_)" ;
    }
    if (ans[1] == 1 && ans[2] == 1 && ans[3] == 1 && ans[4] == 2 && ans[size5] == 2){
      snow+="\\(.,.)/\n";
      //snow+="\\(.,.)/" ;
    }
    if (ans[1] == 1 && ans[2] == 1 && ans[3] == 1 && ans[4] == 4 && ans[size5] == 2){
      snow+="(.,.)/\n";
     // snow+="(.,.)/" ;
    }
     if (ans[1] == 1 && ans[2] == 2 && ans[3] == 1 && ans[4] == 4 && ans[size5] == 4){
     
      snow+="(o,.)\n" ;
    }
     
     if (ans[1] == 1 && ans[2] == 1 && ans[3] == 1 && ans[4] == 1 && ans[size5] == 1){
     
      snow+="(.,.)\n" ;
    }
    
       if (ans[1] == 1 && ans[2] == 2 && ans[3] == 1 && ans[4] == 2 && ans[size5] == 4){
     
      snow+="(o,.)/\n" ;
    }
       if (ans[1] == 1 && ans[2] == 2 && ans[3] == 1 && ans[4] == 2 && ans[size5] == 2){
     
      snow+="\\(o,.)/\n" ;
    }
       if (ans[1] == 1 && ans[2] == 2 && ans[3] == 1 && ans[4] == 4 && ans[size5] == 2){
     
      snow+="\\(o,.)\n" ;
    }
    if (ans[1] == 1 && ans[2] == 1 && ans[3] == 1 && ans[4] == 2 && ans[size5] == 4){
     
      snow+="\\(.,.)\n" ;
    }
    if (ans[1] == 1 && ans[2] == 1 && ans[3] == 1 && ans[4] == 4 && ans[size5] == 4){
      snow+="(.,.)\n";
      //snow+="(.,.)" ;
    }
    if (ans[1] == 1 && ans[2] == 1 && ans[3] == 2 && ans[4] == 2 && ans[size5] == 4){
      snow+="\\(.,o)\n" ;
    }
    if (ans[1] == 1 && ans[2] == 1 && ans[3] == 2 && ans[4] == 2 && ans[size5] == 2){
      snow+="\\(.,o)/\n" ;
    }
    if (ans[1] == 1 && ans[2] == 1 && ans[3] == 2 && ans[4] == 4 && ans[size5] == 2){
      snow+="(.,o)/\n" ;
    }
    if (ans[1] == 1 && ans[2] == 1 && ans[3] == 2 && ans[4] == 4 && ans[size5] == 4){
      snow+="(.,o)\n" ;
    }
    if (ans[1] == 1 && ans[2] == 1 && ans[3] == 3 && ans[4] == 4 && ans[size5] == 4){
      snow+="(.,O)\n" ;
    }
    if (ans[1] == 1 && ans[2] == 1 && ans[3] == 3 && ans[4] == 2 && ans[size5] == 4){
      snow+="(.,O)/\n" ;
    }
    if (ans[1] == 1 && ans[2] == 1 && ans[3] == 3 && ans[4] == 4 && ans[size5] == 2){
      snow+="\\(.,O)\n" ;
    }
    if (ans[1] == 1 && ans[2] == 1 && ans[3] == 3 && ans[4] == 2 && ans[size5] == 2){
      snow+="\\(.,O)/\n" ;
    }
    if (ans[1] == 1 && ans[2] == 1 && ans[3] == 4 && ans[4] == 2 && ans[size5] == 4){
      snow+="(.,-)/\n" ;
    }
    if (ans[1] == 1 && ans[2] == 1 && ans[3] == 4 && ans[4] == 4 && ans[size5] == 2){
      snow+="\\(.,-)\n" ;
    }
    if (ans[1] == 1 && ans[2] == 1 && ans[3] == 4 && ans[4] == 2 && ans[size5] == 2){
      snow+="\\(.,-)/\n" ;
    }
    if (ans[1] == 1 && ans[2] == 1 && ans[3] == 4 && ans[4] == 4 && ans[size5] == 4){
      snow+="(.,-)\n" ;
    }
    if (ans[1] == 1 && ans[2] == 2 && ans[3] == 4 && ans[4] == 2 && ans[size5] == 4){
      snow+="(o,-)/\n" ;
    }
    if (ans[1] == 1 && ans[2] == 2 && ans[3] == 4 && ans[4] == 4 && ans[size5] == 2){
      snow+="\\(o,-)\n" ;
    }
    if (ans[1] == 1 && ans[2] == 2 && ans[3] == 4 && ans[4] == 4 && ans[size5] == 4){
      snow+="(o,-)\n" ;
    }
    if (ans[1] == 1 && ans[2] == 2 && ans[3] == 4 && ans[4] == 2 && ans[size5] == 2){
      snow+="\\(o,-)\n/" ;
    }


if (ans[1] == 1 && ans[2] == 1 && ans[3] == 2 && ans[4] == 2 && ans[size5] == 4){
      snow+="(.,o)/\n" ;
    }
    if (ans[1] == 1 && ans[2] == 1 && ans[3] == 2 && ans[4] == 4 && ans[size5] == 2){
      snow+="\\(.,o)\n" ;
    }
    if (ans[1] == 1 && ans[2] == 1 && ans[3] == 2 && ans[4] == 2 && ans[size5] == 2){
      snow+="\\(.,o)/\n" ;
    }
    if (ans[1] == 1 && ans[2] == 1 && ans[3] == 2 && ans[4] == 4 && ans[size5] == 4){
      snow+="(.,o)\n" ;
    }
    if (ans[1] == 1 && ans[2] == 2 && ans[3] == 3 && ans[4] == 2 && ans[size5] == 4){
      snow+="(o,O)/\n" ;
    }
    if (ans[1] == 1 && ans[2] == 2 && ans[3] == 3 && ans[4] == 4 && ans[size5] == 2){
      snow+="\\(o,O)\n" ;
    }
    if (ans[1] == 1 && ans[2] == 2 && ans[3] == 3 && ans[4] == 4 && ans[size5] == 4){
      snow+="(o,O)\n" ;
    }
    if (ans[1] == 1 && ans[2] == 2 && ans[3] == 3 && ans[4] == 2 && ans[size5] == 2){
      snow+="\\(o,O)\n/" ;
    //d
    }
    if (ans[1] == 1 && ans[2] == 2 && ans[3] == 1 && ans[4] == 1 && ans[size5] == 1){
      snow+="(o,.)\n" ;}

    if (ans[1] == 1 && ans[2] == 2 && ans[3] == 1 && ans[4] == 2 && ans[size5] == 2){
      snow+="\\(o,.)\n/" ;}
    if (ans[1] == 1 && ans[2] == 3 && ans[3] == 4 && ans[4] == 2 && ans[size5] == 4){
      snow+="(o,o)/\n" ;
    }
    if (ans[1] == 1 && ans[2] == 3 && ans[3] == 4 && ans[4] == 4 && ans[size5] == 2){
      snow+="\\(o,o)\n";
      //snow+="\\(o,o)" ;
    }
    if (ans[1] == 1 && ans[2] == 3 && ans[3] == 4 && ans[4] == 2 && ans[size5] == 2){
      snow+="\\(o,o)/\n" ;
    }
    if (ans[1] == 1 && ans[2] == 3 && ans[3] == 4 && ans[4] == 4 && ans[size5] == 4){
      snow+="(o,o)\n" ;
    }
     if (ans[1] == 1 && ans[2] == 3 && ans[3] == 4 && ans[4] == 1 && ans[size5] == 1){
      snow+="(o,o)\n" ;
    }
    if (ans[1] == 1 && ans[2] == 4 && ans[3] == 4 && ans[4] == 2 && ans[size5] == 4){
      snow+="(O,O)/\n" ;
    }
    if (ans[1] == 1 && ans[2] == 4 && ans[3] == 4 && ans[4] == 4 && ans[size5] == 2){
      snow+="\\(O,O)\n" ;
    }
    if (ans[1] == 1 && ans[2] == 4 && ans[3] == 4 && ans[4] == 2 && ans[size5] == 2){
      snow+="\\(O,O)/\n" ;
    }
    if (ans[1] == 1 && ans[2] == 4 && ans[3] == 4 && ans[4] == 4 && ans[size5] == 4){
      snow+="(O,O)\n" ;
    }
    if (ans[1] == 1 && ans[2] == 4 && ans[3] == 4 && ans[4] == 1 && ans[size5] == 1){
      snow+="(O,O)\n" ;
    }
    if (ans[1] == 2 && ans[2] == 1 && ans[3] == 1 && ans[4] == 2 && ans[size5] == 4){
      snow+="(...)/\n" ;
    }
    if (ans[1] == 2 && ans[2] == 1 && ans[3] == 1 && ans[4] == 1&& ans[size5] == 1){
      snow+="(...)\n" ;}
      if (ans[1] == 2 && ans[2] == 1 && ans[3] == 1 && ans[4] == 4 && ans[size5] == 4){
      snow+="(...)\n" ;}
      if (ans[1] == 2 && ans[2] == 1 && ans[3] == 1 && ans[4] == 4 && ans[size5] == 2){
      snow+="\\(...)\n" ;}
       if (ans[1] == 2 && ans[2] == 1 && ans[3] == 1 && ans[4] == 2 && ans[size5] == 2){
      snow+="\\(...)/\n" ;}
       if (ans[1] == 2 && ans[2] == 3 && ans[3] == 4 && ans[4] == 1 && ans[size5] == 2){
      snow+="(o.O)/\n" ;}

      if (ans[1] == 2 && ans[2] == 3 && ans[3] == 2 && (ans[4] == 3||ans[4] == 4) && ans[size5] == 2){
      snow+="(O.o)/\n" ;}
     
      if (ans[1] == 2 && ans[2] == 3 && ans[3] == 2 && (ans[size5] == 3||ans[size5] == 4) && ans[4] == 2){
      snow+="\\(O.o)\n" ;}






    if (ans[1] == 2 && ans[2] == 4 && ans[3] == 4 && ans[4] == 2 && ans[size5] == 4){
      snow+="(O.O)/\n" ;
    }
    if (ans[1] == 2 && ans[2] == 4 && ans[3] == 4 && ans[4] == 4 && ans[size5] == 2){
      snow+="\\(O.O)\n" ;
    }
    if (ans[1] == 2 && ans[2] == 4 && ans[3] == 4 && ans[4] == 2 && ans[size5] == 2){
      snow+="\\(O.O)/\n" ;
    }
    if (ans[1] == 2 && ans[2] == 4 && ans[3] == 4 && ans[4] == 4 && ans[size5] == 4){
      snow+="(O.O)\n" ;
    }
      if (ans[1] == 2 && ans[2] == 4 && ans[3] == 4 && ans[4] == 1 && ans[size5] == 1){
      snow+="(O.O)\n" ;
    }
        if (ans[1] == 2 && ans[2] == 2 && ans[3] == 2&& ans[4] == 2 && ans[size5] == 2){
      snow+="\\(o.o)/\n" ;
    }
         if (ans[1] == 1 && ans[2] == 2 && ans[3] == 2&& ans[4] == 2 && ans[size5] == 2){
      snow+="\\(o,o)/\n" ;
    }
         if (ans[1] == 4 && ans[2] == 2 && ans[3] == 2&& ans[4] == 2 && ans[size5] == 2){
      snow+="\\(o o)/\n" ;
    }
         if (ans[1] == 3 && ans[2] == 2 && ans[3] == 2&& ans[4] == 2 && ans[size5] == 2){
      snow+="\\(o_o)/\n" ;
    }
         if (ans[1] == 2 && ans[2] == 2 && ans[3] == 2&& ans[4] == 3 && ans[size5] == 3&&ans[size6]==1){
      snow+="(o.o)\n" ;
    snow+="/ ( :  ) \n \\";
    }
        if (ans[1] == 2 && ans[2] == 2 && ans[3] == 2&& ans[4] == 3 && ans[size5] == 3&&ans[size6]==2){
      snow+="(o.o)\n" ;
    snow+="/ ( ][  )    \n  \\";
    }
        if (ans[1] == 2 && ans[2] == 2 && ans[3] == 2&& ans[4] == 3 && ans[size5] == 3&&ans[size6]==3){
      snow+="(o.o)\n" ;
    snow+="/ ( >< )     \n \\";
    }
        if (ans[1] == 2 && ans[2] == 2 && ans[3] == 2&& ans[4] == 3 && ans[size5] == 3&&ans[size6]==4){
      snow+="(o.o)\n" ;
    snow+="/ (   )     \n \\";
    }






    if (ans[1] == 3 && ans[2] == 4 && ans[3] == 4 && ans[4] == 2 && ans[size5] == 4){
      snow+="(O_O)/\n" ;
    }
      if (ans[1] == 3 && ans[2] == 1 && ans[3] == 1 && ans[4] == 4 && ans[size5] == 4){
      snow+="(._.)\n" ;
    }
      if (ans[1] == 3 && ans[2] == 1 && ans[3] == 1 && ans[4] == 1 && ans[size5] == 1){
      snow+="(._.)\n" ;
    }
         if (ans[1] == 3 && ans[2] == 1 && ans[3] == 1 && ans[4] == 2 && ans[size5] == 4){
      snow+="(._.)/\n" ;
    }
         if (ans[1] == 3 && ans[2] == 1 && ans[3] == 1 && ans[4] == 2 && ans[size5] == 2){
      snow+="\\(._.)/\n" ;
    }
         if (ans[1] == 3 && ans[2] == 1 && ans[3] == 1 && ans[4] == 4 && ans[size5] == 2){
      snow+="\\(._.)\n" ;
    }

    if (ans[1] == 3 && ans[2] == 4 && ans[3] == 4 && ans[4] == 4 && ans[size5] == 2){
      snow+="\\(O_O)\n" ;
    }
    if (ans[1] == 3 && ans[2] == 4 && ans[3] == 4 && ans[4] == 2 && ans[size5] == 2){
      snow+="\\(O_O)/\n" ;
    }
    if (ans[1] == 3 && ans[2] == 4 && ans[3] == 4 && ans[4] == 4 && ans[size5] == 4){
      snow+="(O_O)\n" ;
    }
    if (ans[1] == 3 && ans[2] == 4 && ans[3] == 4 && ans[4] == 1 && ans[size5] == 1){
      snow+="(O_O)\n" ;
    }
    if (ans[1] == 3 && ans[2] == 2 && ans[3] == 3 && ans[4] == 2 && ans[size5] == 1){
      snow+="\\(o_O)\n" ;
    }
     if (ans[1] == 3 && ans[2] == 2 && ans[3] == 1&& ans[4] == 4 && ans[size5] == 3){
      snow+="(o_.)\n" ;
    }
     if (ans[1] == 3 && ans[2] == 3 && ans[3] == 3&& ans[4] == 3 && ans[size5] == 3){
      snow+="(O_O)\n" ;
    }
     if (ans[1] == 3 && ans[2] == 3 && ans[3] == 3&& ans[4] == 2 && ans[size5] == 2){
      snow+="\\(O_O)/\n" ;
    }
      if (ans[1] == 3 && ans[2] == 2 && ans[3] == 3&& ans[4] == 2 && (ans[size5] == 3||ans[size5] == 4)){
      snow+="\\(o_O)\n" ;
    }
      if (ans[1] == 3 && ans[2] == 2 && ans[3] == 3&& ans[5] == 2 && (ans[4] == 3||ans[4] == 4)){
      snow+="(o_O)/\n" ;
    }
     if (ans[1] == 3 && ans[2] == 3 && ans[3] == 3&& ans[4] == 4 && ans[size5] == 2){
      snow+="(O_O)/\n" ;
    }
     if (ans[1] == 3 && ans[2] == 3 && ans[3] == 3&& ans[4] == 2 && ans[size5] == 4){
      snow+="\\(O_O)\n" ;
    }
    if (ans[1] == 4 && ans[2] == 4 && ans[3] == 4 && ans[4] == 2 && ans[size5] == 4){
      snow+="(O O)/\n" ;
    }

       if (ans[1] == 4 && ans[2] == 2 && ans[3] == 1 && ans[4] == 2 && ans[size5] == 4){
      snow+="\\(o .)\n" ;
    }

   if (ans[1] == 4 && ans[2] == 2 && ans[3] == 1 && ans[4] == 4 && ans[size5] == 4){
      snow+="(o .)\n" ;
    }
     if (ans[1] == 4 && ans[2] == 2 && ans[3] == 1 && ans[4] == 1 && ans[size5] == 1){
      snow+="(o .)\n" ;
    }



     if (ans[1] == 4 && ans[2] == 1 && ans[3] == 1 && ans[4] == 4 && ans[size5] == 4){
      snow+="(. .)\n" ;
    }
     if (ans[1] == 4 && ans[2] == 3 && ans[3] == 2 && ans[4] == 4 && ans[size5] == 3){
      snow+="(O o)\n" ;
    }
     if (ans[1] == 4 && ans[2] == 2 && ans[3] == 3 && ans[4] == 4 && ans[size5] == 3){
      snow+="(o O)\n" ;
    }
     if (ans[1] == 4 && ans[2] == 3 && ans[3] == 2 && ans[4] == 2&& ans[size5] == 3){
      snow+="\\(O o)\n" ;
    }
     if (ans[1] == 4 && ans[2] == 3 && ans[3] == 2 && ans[4] == 2 && ans[size5] == 2){
      snow+="\\(O o)/\n" ;
    }
     if (ans[1] == 4 && ans[2] == 3 && ans[3] == 2 && ans[4] == 3 && ans[size5] == 2){
      snow+="(O o)/\n" ;
    }
     if (ans[1] == 4 && ans[2] == 1 && ans[3] == 1 && ans[4] == 1 && ans[size5] == 1){
      snow+="(. .)\n" ;
    }
     if (ans[1] == 4 && ans[2] == 1 && ans[3] == 1 && ans[4] == 2 && ans[size5] == 4){
      snow+="(. .)/\n" ;
    }
     if (ans[1] == 4 && ans[2] == 1 && ans[3] == 1 && ans[4] == 2 && ans[size5] == 2){
      snow+="\\(. .)/\n" ;
    }
     if (ans[1] == 4 && ans[2] == 1 && ans[3] == 1 && ans[4] == 4 && ans[size5] == 2){
      snow+="\\(. .)\n" ;
    }
    if (ans[1] == 4 && ans[2] == 4 && ans[3] == 4 && ans[4] == 4 && ans[size5] == 2){
      snow+="\\(_ _)\n" ;
    }
    if (ans[1] == 4 && ans[2] == 4 && ans[3] == 4 && ans[4] == 2 && ans[size5] == 2){
      snow+="\\(_ _)/\n" ;
    }
    if (ans[1] == 4 && ans[2] == 4 && ans[3] == 4 && ans[4] == 2 && ans[size5] == 4){
      snow+="\\(_ _)\n" ;
    }
    if (ans[1] == 4 && ans[2] == 4 && ans[3] == 4 && ans[4] == 4 && ans[size5] == 4){
      snow+="(_ _)\n" ;
    }
    if (ans[size6] == 1 && ans[4] == 4 && ans[size5] == 1){
      snow+="( : )>\n" ;
    }
    if (ans[size6] == 1 && ans[size5] == 1&& ans[4] == 4 ){
      snow+="<( : )\n" ;
    }
    if (ans[size6] == 1 && ans[4] == 4 && ans[size5] == 4){
      snow+="( : )\n" ;
    }
    if (ans[size6] == 1 && ans[4] == 1 && ans[size5] == 4){
      snow+="<( : )\n" ;
    }
     if (ans[size6] == 1 && ans[4] == 4 && ans[size5] == 1){
      snow+="( : )>\n" ;
    }
    if (ans[size6] == 1 && ans[4] == 1 && ans[size5] == 1){
      snow+="<( : )>\n" ;
    }
    if (ans[size6] == 2 && ans[4] == 1 && ans[size5] == 1){
      snow+="<(] [)>\n" ;
    }
     if (ans[size6] == 2 && ans[4] == 4 && ans[size5] == 3){
      snow+="(] [)\\\n" ;
    }
     if (ans[size6] == 2 && ans[4] == 2 && ans[size5] == 1){
      snow+=" (] [)>\n" ;
    }
      if (ans[size6] == 2 && ans[4] == 1 && ans[size5] == 2){
      snow+="<(] [)\n" ;
    }
      if (ans[size6] == 2 && ans[4] == 3 && ans[size5] == 4){
      snow+="/(] [)\n" ;
    }
     
    //c
     if (ans[size6] == 2 && (ans[4] == 2||ans[4]==4)&& (ans[size5] == 2||ans[5]==4)){
      snow+="(] [)\n" ;
    }

     if (ans[size6] == 2 && (ans[4] == 2)&& (ans[size5] ==3)){
      snow+="(] [)\\ \n" ;
    }
     if (ans[size6] == 2 && (ans[4] == 3)&& (ans[size5] ==2)){
      snow+="/(] [) \n" ;
    }


    if (ans[size6] == 2 && ans[4] == 1 && ans[size5] == 4){
      snow+="<(] [)\n" ;
    }
  
    if (ans[size6] == 2 && ans[4] == 4 && ans[size5] == 1){
      snow+=" (] [)>\n";
     // snow+=" (] [)>" ;
    }
 
    if (ans[size6] == 3 && ans[4] == 4 && ans[size5] == 1){
      snow+="(> <)>\n" ;
    }
    if (ans[size6] == 3 && ans[size5] == 1){
      snow+="(> <)>\n" ;
    }
    if (ans[size6] == 3 && ans[4] == 4 && ans[size5] == 4){
      snow+="(> <)\n" ;
    }
    if (ans[size6] == 3 && ans[4] == 1 && ans[size5] == 1){
      snow+="<(> <)>\n" ;
    }
    
    if (ans[size6] == 3 && ans[4] == 1 && ans[size5] == 3){
      snow+="<(> <)\\n" ;
    }
    if (ans[size6] == 3 && ans[4] == 3 && ans[size5] == 1){
      snow+="/(> <)>\n" ;
    }
    if (ans[size6] == 3 && ans[4] == 3 && ans[size5] == 4){
      snow+="/(> <)\n" ;
    }
    if (ans[size6] == 3 && ans[4] == 4 && ans[size5] == 3){
      snow+="(> <)\\n" ;
    }
    if (ans[size6] == 3 && ans[4] == 1 && ans[size5] == 4){
      snow+="<(> <)\n" ;
    }
    if (ans[size6] == 3 && ans[4] == 1){
      snow+="<(> <)" ;
    }
   if (ans[size6] == 3 &&( ans[4] == 2||ans[4]==4) && ans[size5] == 3){
      snow+="(> <)\\\n" ;
    }
       if (ans[size6] == 3 &&( ans[size5] == 2||ans[size5]==4) && ans[4] == 3){
      snow+="/(> <)\n" ;
    }
      if (ans[size6] == 3 && ans[size5] == 3 && ans[4] == 3){
      snow+="/(> <)\\\n" ;
    }


    if (ans[size6] == 4 && ans[4] == 4 && ans[size5] == 4){
      snow+="(   )\n" ;
    }
     if (ans[size6] == 4 && ans[4] == 1 && ans[size5] == 4){
      snow+="<(   )\n" ;
    }
 if (ans[size6] == 4 && ans[4] == 1 && ans[size5] == 1){
      snow+="<(   )>\n" ;
    }

     if (ans[size6] == 4 && ans[4] == 4 && ans[size5] == 1){
      snow+="(   )>\n" ;
    }
 if (ans[size6] == 4 && ans[4] == 4 && ans[size5] == 3){
      snow+="(   )\\\n" ;
    }
     if (ans[size6] == 4 && ans[4] == 3 && ans[size5] == 3){
      snow+="/(   )\\\n" ;
    }
     if (ans[size6] == 4 && ans[4] == 3 && ans[size5] == 4){
      snow+="/(   )\n" ;
    }
     if (ans[size6] == 4 && ans[4] == 1 && ans[size5] == 3){
      snow+="<(   )\\\n" ;
    }
     if (ans[size6] == 4 && ans[4] == 3 && ans[size5] == 1){
      snow+="/(   )>\n" ;
    }


    if (ans[size6] == 4 && ans[4] == 4 && ans[size5] == 1){
      snow+="(   )\n" ;
    }
    if (ans[size6] == 4 && ans[size5] == 1){
      snow+="(   )\n" ;
    }
    if (ans[size6] == 4 && ans[4] == 1 && ans[size5] == 1){
      snow+="<(   )>\n" ;
    }
    if (ans[size6] == 4 && ans[4] == 1 && ans[size5] == 4){
      snow+="<(   )\n" ;
    }
    if (ans[size6] == 4 && ans[4] == 1){
      snow+="<(   )\n" ;
    }
    if (ans[size7] == 1){
      snow+="( : )\n";
     // snow+="( : )" ;
    }
    if (ans[size7] == 2){
      snow+="( "
              " )\n"
           ;
    }
    if (ans[size7] == 3){
      snow+="( ___ )\n" ;
    }
    if (ans[size7] == 4){
      snow+=" (   )\n";
     // snow+="(   )" ;
    }

    return snow;
  }
  vector<int> splitdigit(int number)
  {
    const int d=10;
    int n = reversenum(number);
    vector<int> ans;
    while (n >= d)
    {
      ans.push_back(n % d);
      n /= d;
    }
    ans.push_back(n);
    return ans;
  }

  bool all_chars_same(string testStr)
  {
    char letter = testStr[0];

    for (int i = 1; i < testStr.length(); i++)
    {
      if (testStr[i] != letter){
        return false;
      }
    }

    return true;
  }
  int reversenum(int num)
  {
    const int d=10;
    int rev_num = 0;
    while (num > 0)
    {
      rev_num = rev_num * d + num % d;
      num = num / d;
    }
    return rev_num;
  }

}; // namespace ariel