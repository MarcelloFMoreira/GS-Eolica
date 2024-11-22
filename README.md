
<h1>Solar Panel Positioning System</h1>

<b>Descrição do Projeto:</b> <br> <br>
Este projeto implementa um sistema de posicionamento de painel solar em pequena escala utilizando Arduino. O objetivo é ajustar automaticamente o ângulo do painel solar para a direção com maior incidência de luz, garantindo maior eficiência na captação de energia solar. Para isso, são utilizados três sensores LDR (Light Dependent Resistor) e um micro servo 9g. <br>O sistema processa as leituras dos sensores e posiciona o painel com base na intensidade da luz captada, Além disso, o sistema inclui um potenciômetro que simula o quanto de energia solar seria gerada pelo painel solar, proporcionando uma visualização do desempenho energético do sistema.

<h1>Funcionalidades</h1>
Monitoramento em tempo real da intensidade de luz captada por três LDRs.<br>
Ajuste automático do ângulo do painel solar com base nas leituras dos sensores.<br>
Controle do servo motor para garantir a melhor exposição à luz.<br>
Simulação de energia gerada por uma placa solar utilizando um potenciometro.<br>
Envio de dados para visualização em tempo real via Serial, com integração ao Node-RED e protocolo mqtt.

<h1>Componentes Utilizados</h1> 
<b>Arduino Uno: </b>  Controlador principal para processar as leituras dos sensores e controlar o servo motor.<br>
<b>Sensores LDR (x3): </b>  Medem a intensidade de luz em diferentes posições.<br>
<b>Micro Servo 9g: </b>  Responsável por ajustar a posição do painel solar.<br>
<b>Jumpers e Protoboard: </b> Para interligação dos componentes.<br>
<b>Potenciometro:</b> Responsável por medir o ganho de energia vinda do painel solar. 

<h1> Bibliotecas: </h1>

<b>Servo.h</b> para controle do servo motor. <br>
<b>ArduinoJson.h</b> para formatação e envio dos dados. 

<h1> Como Funciona </h1>

Os três sensores LDR medem a intensidade de luz em suas respectivas posições. <br>
O Arduino processa as leituras dos sensores e determina qual deles detecta a maior intensidade de luz.<br>
O servo motor ajusta o ângulo do painel para alinhar-se com a direção da luz mais intensa.<br>
Os dados das leituras dos LDRs, a posição do servo e o status da luminosidade são enviados via Serial, permitindo visualização e análise em tempo real no Node-RED e.
O potenciômetro simula a energia gerada pelo painel solar. <br>


<h1>Integrantes do Projeto </h1>

<table>
  <thead>
    <tr>
      <th>Desenvolvedores</th> 
      <th>Icon</th>
      <th>RM</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>Luiz Fernando</td>
      <td>
        <a href="https://github.com/MarcelloFMoreira">
          <img src="https://avatars.githubusercontent.com/u/84513178?v=4" height="50" style="max-width: 100%;">
        </a>
      </td>
      <td>RM555561</td>
    </tr>
    <tr>
      <td>Marcello Moreira</td>
      <td>
        <a href="https://github.com/MarcelloFMoreira">
          <img src="https://avatars.githubusercontent.com/u/161846509?v=4" height="50" style="max-width: 100%;">
        </a>
      </td>
      <td>RM557531</td>
    </tr>
  </tbody>
</table>
