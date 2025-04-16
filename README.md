# Cp-Arduino 

## Integrantes
Gustavo Mendes RM 563753
Enrico Brito RM 563265
## Descrição 
Esse projeto usa um sensor de luz (LDR) que mede a claridade do ambiente e envia esse valor pro Arduino.
Dependendo da quantidade de luz, o Arduino acende um LED diferente: verde se estiver escuro, azul se a luz
for média e vermelho se estiver claro. É como um semáforo que mostra o nível de luminosidade. O LDR é
ligado no pino A0 e os LEDs nos pinos digitais com resistores. O Arduino fica lendo o sensor o tempo todo e
decide qual LED acender com base no valor. Dá pra acompanhar tudo pelo monitor serial. É um projeto
simples e ótimo pra aprender sobre sensores, tomada de decisão e uso de LEDs com Arduino.
