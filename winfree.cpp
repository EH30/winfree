#include <iostream>

std::string keys[] = {
  "TX9XD-98N7V-6WMQ6-BX7FG-H8Q99", "W269N-WFGWX-YVC9B-4J6C9-T83GX", "MH37W-N47XK-V7XM9-C7227-GCQG9",
  "NPPR9-FWDCX-D2C8J-H872K-2YT43", "DPH2V-TTNVB-4X9Q3-TJR4H-KHJW4", "NW6C2-QMPVW-D7KKK-3GKT6-VCFB2", 
  "2WH4N-8QGBV-H22JP-CT43Q-MDWWJ", "WNMTR-4C88C-JK8YV-HQ7T2-76DF9", "2F77B-TNFGY-69QQF-B8YKP-D69TJ",
  "DCPHK-NFMTC-H88MJ-PFHPY-QJ4BJ", "QFFDN-GRT3P-VKWWX-X7T3R-8B639", "TX9XD-98N7V-6WMQ6-BX7FG-H8Q99",
  "JK76T-CFG67-SDZ45-FYT76-BHJ78", "NJK78-FCT56-89UYH-SRE67-VHG67", "NJK89-TRY67-NM78Y-DRT67-HBJ78",
  "MLK89-TFY67-ESR56-NM78Y-YUG78", "KML89-ER67G-UHI89-MNU78-TY76Y", "MKL89-VGH67-ERS56-YU67G-OPUI7",
  "NBM78-HBJ78-JH78T-BJH78-DRT56", "OK879-VGH67-JH67F-SD56D-YUFR7", "FJ82H-XT6CR-J8D7P-XQJJ2-GPDD4",
  "MRPKT-YTG23-K7D7T-X2JMM-QY7MG", "W82YF-2Q76Y-63HXB-FGJG9-GF7QX", "33PXH-7Y6KF-2VJC9-XBBR8-HVTHH",
  "YDRBP-3D83W-TY26F-D46B2-XCKRJ", "C29WB-22CC8-VJ326-GHFJW-H9DH4"
};
    

void menu(){
  std::cout << "1) Windows 10 Home" << std::endl;
  std::cout << "2) Windows 10 Professional" << std::endl;
  std::cout << "3) Windows 10 Professional N" << std::endl;
  std::cout << "4) Windows 10 Enterprise" << std::endl;
  std::cout << "5) Windows 10 Enterprise N" << std::endl;
  std::cout << "6) Windows 10 Education" << std::endl;
  std::cout << "7) Windows 10 Education N" << std::endl;
  std::cout << "8) Windows 10 Enterprise 2015 LTSB" << std::endl;
  std::cout << "9) Windows 10 Enterprise 2015 LTSB N" << std::endl;
  std::cout << "10) Windows 10 Enterprise 2016 LTSB" << std::endl;
  std::cout << "11) Windows 10 Enterprise 2016 LTSB N" << std::endl;
  std::cout << "12) Windows 10 Core" << std::endl;
  std::cout << "13) Windows 8.1 Professional" << std::endl;
  std::cout << "14) Windows 8.1 Professional N" << std::endl;
  std::cout << "15) Windows 8.1 Enterprise" << std::endl;
  std::cout << "16) Windows 8.1 Enterprise N" << std::endl;
  std::cout << "17) Windows 8 Professional" << std::endl;
  std::cout << "18) Windows 8 Professional N" << std::endl;
  std::cout << "19) Windows 8 Enterprise" << std::endl;
  std::cout << "20) Windows 8 Enterprise N" << std::endl;
  std::cout << "21) Windows 7 Professional" << std::endl;
  std::cout << "22) Windows 7 Professional N" << std::endl;
  std::cout << "23) Windows 7 Professional E" << std::endl;
  std::cout << "24) Windows 7 Enterprise" << std::endl;
  std::cout << "25) Windows 7 Enterprise N" << std::endl;
  std::cout << "26) Windows 7 Enterprise E" << std::endl;


  std::cout << "\n" << std::endl;

}


int main(int argc, char *argv[]){
    char command[100];
    menu();
    int user_input;
    std::cout << "Select You're Windows Edition: ";
    std::cin >> user_input;
    
    if (user_input-1 >= sizeof(keys)/sizeof(keys[0])){
      std::cout << "Invalid Input" << std::endl;
      system("pause");
      return 1;
    }

    std::string key = keys[user_input-1];

    sprintf(command, "cscript slmgr.vbs /ipk %s", key.c_str());

    std::cout << "[+]Trying: " << key << std::endl;
    system(command);
    system("cscript slmgr.vbs /skms kms.lotro.cc");
    system("cscript slmgr.vbs /ato");


    system("pause");
    return 0;
}
