//研究可变电阻(电位器)的模拟讯号输入
//之后用可变电阻来控制led的亮度

int sensor = A0;
int sensorRead = 0;
int newData = 0;

void setup() {
  Serial.begin(9600);

}

void loop() {
  sensorRead = analogRead(sensor); //模拟信号读取
  newData = map(sensorRead,0,1023,0,255);
  Serial.println(newData);
  analogWrite(3,newData); //模拟信号输出
  delay(200); 

}
