#define buzzerPin     5
#define trigPin       9
#define echoPin      10
#define ledPin       11
#define TIMEOUT_US  30000   // timeout pulseIn em microssegundos

// Parâmetros de leitura e alerta
const float DISTANCIA_MAX = 320.0;   // cm: leitura máxima (0% de água)
const float PCT_ALERTA    = 60.0;    // %: acima disso dispara alerta

// Armazena última distância para imprimir só se mudar
float ultimaDistancia = -1.0;

void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin,    OUTPUT);
  pinMode(trigPin,   OUTPUT);
  pinMode(echoPin,   INPUT);
  digitalWrite(trigPin, LOW);
  digitalWrite(ledPin,   LOW);
  Serial.begin(9600);
}

// Retorna distância em cm (ou -1 se falhar)
float medirDistancia() {
  long duracao;

  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duracao = pulseIn(echoPin, HIGH, TIMEOUT_US);
  if (duracao <= 0) return -1.0;

  return (duracao * 0.0343) / 2.0;
}

// Toca um “bip” curto no buzzer
void tocarBip() {
  tone(buzzerPin, 1000);
  delay(100);
  noTone(buzzerPin);
}

// Liga o LED
void ligarLED() {
  digitalWrite(ledPin, HIGH);
}

// Desliga o LED
void desligarLED() {
  digitalWrite(ledPin, LOW);
}

// Verifica nível em % e dispara alerta se >= PCT_ALERTA
void verificarAlerta(float d) {
  if (d <= 0) {
    desligarLED();
    return;
  }
  // converte distância em % de nível: 0cm → 100%, DISTANCIA_MAX → 0%
  float pct = (DISTANCIA_MAX - d) / DISTANCIA_MAX * 100.0;

  if (pct >= PCT_ALERTA) {
    Serial.print("Nível de água: ");
    Serial.print(pct, 1);
    Serial.println(" %");
    Serial.println("! ALERTA DE ALAGAMENTO !");
    ligarLED();
    for (int i = 0; i < 3; i++) {
      tocarBip();
      delay(100);
    }
  } else {
    desligarLED();
  }
}

// Imprime distância apenas se mudou > 0.1 cm
void printSeMudou(float d) {
  if (d > 0 && fabs(d - ultimaDistancia) > 0.1) {
    Serial.print("Distância: ");
    Serial.print(d, 1);
    Serial.println(" cm");
    ultimaDistancia = d;
  }
}

void loop() {
  float d = medirDistancia();
  printSeMudou(d);
  verificarAlerta(d);
  delay(500);
}







