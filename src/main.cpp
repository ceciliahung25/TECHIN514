#include <Arduino.h>
// 替换为您连接模拟信号的引脚编号
const int analogPin = D1; // 如果使用 D2，则这里是 2

void setup() {
  Serial.begin(115200); // 初始化串行通信
}

void loop() {
  int ADC_Value = analogRead(analogPin); // 读取模拟值
  float voltage = (ADC_Value / 4095.0) * 3.3; // 将ADC值转换为电压

  // 显示ADC值
  Serial.print("ADC Value: ");
  Serial.println(ADC_Value);

  // 显示计算出的电压值，保留3位小数
  Serial.print("Voltage: ");
  Serial.println(voltage, 2); 

  delay(1000); // 每秒读取一次
}
