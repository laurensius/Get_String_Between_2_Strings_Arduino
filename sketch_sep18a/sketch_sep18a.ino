void setup() {
  test();
}

void loop() {
  delay(1000);
}

String midString(String str, String start, String finish){
  int locStart = str.indexOf(start);
  if (locStart==-1) return "";
  locStart += start.length();
  int locFinish = str.indexOf(finish, locStart);
  if (locFinish==-1) return "";
  return str.substring(locStart, locFinish);
}

void test(){
  Serial.begin(115200);
  String str = "<Tanggal>23 Juli 1990</Tanggal>";
  Serial.println(str);
  Serial.println("Mengambil string antara <Tanggal> dan </Tanggal>");  
  Serial.println( midString( str, "<Tanggal>", "</Tanggal>" ) );

 }
