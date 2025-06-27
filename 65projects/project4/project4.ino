// Проект 4 - Демонстрация работы цифрового входа
#define LED 12
#define BUTTON 7
void setup(){
  pinMode(LED, OUTPUT); // Выход для управления светодиодом
  pinMode(BUTTON, INPUT); // Вход для кнопки
}
void loop(){
  if ( digitalRead(BUTTON) == HIGH ){
    digitalWrite(LED, HIGH); // включить светодиод
    delay(500); // ждать 0.5 секунды
    digitalWrite(LED, LOW); // выключить светодиод
  }
}