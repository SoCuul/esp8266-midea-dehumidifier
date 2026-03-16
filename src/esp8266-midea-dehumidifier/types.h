enum fanSpeed_t {
  low = 40,
  high = 80
};

enum dehumMode_t {
  setpoint = 1,
  continuous = 2,
  maximum = 4
};

struct dehumidifierState_t { 
  boolean powerOn;
  dehumMode_t mode;
  fanSpeed_t fanSpeed;
  byte humiditySetpoint;
  byte currentHumidity;
  byte errorCode;
  boolean bucketFull;
  boolean bucketMissing;
};
