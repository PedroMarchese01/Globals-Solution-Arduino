# 📋 Sistema de Monitoramento de Nível de Água
> Projeto de monitoramento de nível de água com sensor ultrassônico e sistema de alerta.  
[![License: MIT](https://img.shields.io/badge/License-MIT-blue)](LICENSE)
---

## 🔧 Projeto no Tinkercad  
[👉 **Clique aqui para ver o projeto no Tinkercad**](https://www.tinkercad.com/things/bM5BVSByasZ-arduino-gs-niveis-de-agua?sharecode=yaPSDWxXAluogEA6vsUCcbZsX9C7PxVagP35QVrWj0E)

&nbsp;

## 📹 Vídeo Demonstrativo  
[▶️ **Clique aqui para assistir ao vídeo demonstrativo**](https://youtu.be/EVlGEo8pNak)

## 📝 Índice

1. [🧩 Descrição Completa do Problema](#-descrição-completa-do-problema)  
2. [🔭 Visão Geral da Solução](#-visão-geral-da-solução)  
3. [✨ Funcionalidades](#-funcionalidades)  
4. [🚀 Instalação Rápida](#-instalação-rápida)  
5. [⚙️ Como Usar](#️-como-usar)  
6. [💡 Personalização](#-personalização)  
7. [👥 Autores](#-autores)  
8. [🛡️ Licença](#️-licença)

---
## 🧩 Descrição Completa do Problema

Nos últimos anos, eventos climáticos extremos — como enchentes e alagamentos — tornaram-se cada vez mais frequentes, causando prejuízos materiais, colocando vidas em risco e sobrecarregando órgãos de resposta emergencial, como a Defesa Civil. A ausência de sistemas preventivos e de monitoramento acessíveis em comunidades vulneráveis agrava ainda mais esse cenário.

O problema identificado neste projeto é **a falta de um meio simples, eficiente e de baixo custo para monitorar o nível de água em áreas suscetíveis a alagamentos**, seja em rios, reservatórios ou regiões urbanas com histórico de enchentes.  

A proposta deste projeto é desenvolver uma **solução prática com sensor ultrassônico**, capaz de detectar o aumento do nível da água e **acionar alertas locais imediatos**, além de **prover a possibilidade de integração com uma API web**, permitindo que autoridades ou plataformas online recebam os dados em tempo real para tomada de decisão.

Dessa forma, nosso sistema contribui com uma **resposta ágil e comunitária ao risco de alagamentos**, promovendo **segurança, conscientização e autonomia tecnológica** nas comunidades.

## 🔭 Visão Geral da Solução

O projeto visa fornecer uma solução acessível, eficiente e prática para o monitoramento do nível de água em locais com risco de enchentes, como margens de rios ou áreas urbanas suscetíveis. Utilizando o sensor ultrassônico HC-SR04 conectado a um microcontrolador Arduino, o sistema realiza medições contínuas da altura da água e aciona alertas visuais e sonoros (LED e buzzer) ao identificar níveis críticos. 

Além disso, está estruturado para permitir fácil integração futura com APIs web, possibilitando que dados de monitoramento sejam transmitidos em tempo real a sistemas da Defesa Civil ou plataformas públicas de monitoramento climático.

![Imagem do circuito montado no Wokwi](./imagem%20do%20projeto.png)

## ✨ Funcionalidades

- 🎯 **Medição de nível de água:** Utiliza sensor ultrassônico HC-SR04.  
- 🚨 **Sistema de alerta:** Buzzer e LED acionados quando o nível ultrapassa 60%.  
- 📶 **API (Futura Atualização):** Estrutura preparada para envio de dados a um servidor web.  
- 🖥️ **Monitor Serial:** Exibe leitura do nivel da água e alertas.

![Exemplo de saída no Monitor Serial]()

---

## 🚀 Instalação Rápida

```bash
# Clone o repositório
git clone https://github.com/seu-usuario/monitoramento-nivel-agua.git

# Entre na pasta do projeto
cd monitoramento-nivel-agua

# Abra o projeto na IDE do Arduino ou VS Code
# Carregue o sketch codigo.ino na sua placa Arduino
```

## ⚙️ Como Usar

- Conecte o sensor **HC-SR04** aos pinos definidos no sketch:  
  - Trig → 9  
  - Echo → 10  

- Conecte o **buzzer** ao pino **5** e o **LED** ao pino **11**.

- Abra o **Monitor Serial** a **9600 bps** para visualizar as leituras.

- O buzzer e o LED serão acionados quando o nível de água passar de **60%** (distância ≤ **128 cm**).

- Em uma etapa futura, a função de envio via **API** poderá ser ativada para notificar o site da **Global Solution**.

---

## 💡 Personalização

- **Ajustar limiar de alerta:** Modifique a constante `PCT_ALERTA` no `codigo.ino`.

- **Alterar pinos:** Atualize as definições de `buzzerPin`, `ledPin`, `trigPin` e `echoPin` conforme sua montagem.

- **Implementar API:** Adicione a biblioteca HTTP e use `HTTPClient` para enviar requisições ao endpoint desejado.

---

## 👥 Autores

| Nome           | RM     | Contato |
|----------------|--------|---------|
| Pedro Marchese | 563339 | [GitHub](https://github.com/PedroMarchese01) |
| Enzo Augusto   | 562249 | [GitHub](https://github.com/Enzoo-August)    |
| Gabriel Salles | 563584 | [GitHub](https://github.com/gabrielrsalles)  |

---

## 🛡️ Licença

Este projeto está licenciado sob a **MIT License**. Veja o arquivo [LICENSE](LICENSE) para mais detalhes.
