void setup() {
  // explicar pro arduino que na porta 13 tem um led conectado
  // O led precisa de um OUTPUT de energia
  pinMode(13,OUTPUT);
}

void loop() {
  // 16 MHz ele roda em 16MEGA HEARTz ou seja 16 milhões de vezes por segundo.
  // TUDO QUE ESCREVERMOS VAI RODAR MILHOES DE VEZES POR SEGUNDO
  // Acendendo a PORTA 13 do led com HIGH
  digitalWrite(13,HIGH);
  // delay de 1000 milisegundos(ou 1 segundo * 1000)
  delay(1000);
  //Acendendo a PORTA 13 do led com LOW
  digitalWrite(13,LOW);
  // delay de 1000 milisegundos(ou 1 segundo * 1000)
  delay(1000);
}
