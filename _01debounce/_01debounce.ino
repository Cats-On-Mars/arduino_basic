
int pushButton = 7;
int buttonState = 0; 
int beforeState = 0;
int pressTime = 0;

void setup() {
  Serial.begin(9600); //开始与电脑连线,定义传输速率为9600
  pinMode(pushButton,INPUT); //将脚位7定为输入(即侦测器)
}

void loop() {
  buttonState = digitalRead(pushButton); //从脚位7侦测按钮状况(1/0)
  if(buttonState == 1 and beforeState == 0){
    pressTime = pressTime+1;
    Serial.print("buttonState:"); 
    Serial.println(pressTime); //让序列埠输出状况
    }
  if (buttonState != beforeState){  //debounce
    delay(20);                     
    }
  beforeState = buttonState;
  delay(1);
}
