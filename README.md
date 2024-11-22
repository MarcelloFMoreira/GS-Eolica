
Solar Panel Positioning System

Descrição do Projeto:
Este projeto implementa um sistema de posicionamento de painel solar em pequena escala utilizando Arduino. O objetivo é ajustar automaticamente o ângulo do painel solar para a direção com maior incidência de luz, garantindo maior eficiência na captação de energia solar. Para isso, são utilizados três sensores LDR (Light Dependent Resistor) e um micro servo 9g. O sistema processa as leituras dos sensores e posiciona o painel com base na intensidade da luz captada.

Funcionalidades
Monitoramento em tempo real da intensidade de luz captada por três LDRs.
Ajuste automático do ângulo do painel solar com base nas leituras dos sensores.
Controle do servo motor para garantir a melhor exposição à luz.
Envio de dados para visualização em tempo real via Serial, com integração ao Node-RED.
Componentes Utilizados
Arduino Uno: Controlador principal para processar as leituras dos sensores e controlar o servo motor.
Sensores LDR (x3): Medem a intensidade de luz em diferentes posições.
Micro Servo 9g: Responsável por ajustar a posição do painel solar.
Jumpers e Protoboard: Para interligação dos componentes.
Bibliotecas:
Servo.h para controle do servo motor.
ArduinoJson.h para formatação e envio dos dados.
Como Funciona
Os três sensores LDR medem a intensidade de luz em suas respectivas posições.
O Arduino processa as leituras dos sensores e determina qual deles detecta a maior intensidade de luz.
O servo motor ajusta o ângulo do painel para alinhar-se com a direção da luz mais intensa.
Os dados das leituras dos LDRs, a posição do servo e o status da luminosidade são enviados via Serial, permitindo visualização e análise em tempo real no Node-RED.
Código Fonte
Confira o código completo no arquivo principal do projeto solar_panel_system.ino.

Futuras Implementações
Melhorias no Algoritmo de Detecção: Otimizar o cálculo do ângulo para aumentar a precisão.
Conexão IoT: Enviar dados para uma plataforma de monitoramento remoto.
Armazenamento de Dados: Registrar o histórico de movimento e condições de luminosidade para análise futura.
Escalabilidade: Adaptação para sistemas maiores e integração com painéis solares reais.
Integrantes do Projeto
Este projeto foi desenvolvido por [Seu Nome] como parte de uma iniciativa para aprimorar sistemas de energia renovável e aplicações em IoT.
Solar Panel Positioning System
Descrição do Projeto
Este projeto implementa um sistema de posicionamento de painel solar em pequena escala utilizando Arduino. O objetivo é ajustar automaticamente o ângulo do painel solar para a direção com maior incidência de luz, garantindo maior eficiência na captação de energia solar. Para isso, são utilizados três sensores LDR (Light Dependent Resistor) e um micro servo 9g. O sistema processa as leituras dos sensores e posiciona o painel com base na intensidade da luz captada.

Funcionalidades
Monitoramento em tempo real da intensidade de luz captada por três LDRs.
Ajuste automático do ângulo do painel solar com base nas leituras dos sensores.
Controle do servo motor para garantir a melhor exposição à luz.
Envio de dados para visualização em tempo real via Serial, com integração ao Node-RED.
Componentes Utilizados
Arduino Uno: Controlador principal para processar as leituras dos sensores e controlar o servo motor.
Sensores LDR (x3): Medem a intensidade de luz em diferentes posições.
Micro Servo 9g: Responsável por ajustar a posição do painel solar.
Jumpers e Protoboard: Para interligação dos componentes.
Bibliotecas:
Servo.h para controle do servo motor.
ArduinoJson.h para formatação e envio dos dados.
Como Funciona
Os três sensores LDR medem a intensidade de luz em suas respectivas posições.
O Arduino processa as leituras dos sensores e determina qual deles detecta a maior intensidade de luz.
O servo motor ajusta o ângulo do painel para alinhar-se com a direção da luz mais intensa.
Os dados das leituras dos LDRs, a posição do servo e o status da luminosidade são enviados via Serial, permitindo visualização e análise em tempo real no Node-RED.
Código Fonte
Confira o código completo no arquivo principal do projeto solar_panel_system.ino.

Futuras Implementações
Melhorias no Algoritmo de Detecção: Otimizar o cálculo do ângulo para aumentar a precisão.
Conexão IoT: Enviar dados para uma plataforma de monitoramento remoto.
Armazenamento de Dados: Registrar o histórico de movimento e condições de luminosidade para análise futura.
Escalabilidade: Adaptação para sistemas maiores e integração com painéis solares reais.
Integrantes do Projeto
Este projeto foi desenvolvido por [Seu Nome] como parte de uma iniciativa para aprimorar sistemas de energia renovável e aplicações em IoT.
