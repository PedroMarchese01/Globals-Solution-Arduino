# 📋 Sistema de Monitoramento de Nível de Água

> Projeto de monitoramento de nível de água com sensor ultrassônico e sistema de alerta.

## 📝 Índice

1. [✨ Funcionalidades](#-funcionalidades)  
2. [🚀 Instalação Rápida](#-instalação-rápida)  
3. [⚙️ Como Usar](#️-como-usar)  
4. [💡 Personalização](#-personalização)  
5. [👥 Autores](#-autores)  
6. [🛡️ Licença](#️-licença)

---


![image](https://github.com/user-attachments/assets/d228a10f-e6db-4897-a15c-da2927c4872c)


## ✨ Funcionalidades

- 🎯 **Medição de nível de água:** Utiliza sensor ultrassônico HC-SR04.  
- 🚨 **Sistema de alerta:** Buzzer e LED acionados quando o nível ultrapassa 60%.  
📶 **API (Futura Atualização):** Embora o escopo do nosso projeto inclua a comunicação com uma API para envio de dados em tempo real ao site da Global Solution — com o objetivo de alertar a Defesa Civil em casos de alagamento — essa funcionalidade ainda não foi implementada devido à falta de conhecimento técnico sobre integração via API. No entanto, o código está estruturado para facilitar essa adição futura, permitindo que sensores físicos enviem os dados diretamente ao sistema web.  
- 🖥️ **Monitor Serial:** Imprime distância somente quando muda e exibe percentual de nível.

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
