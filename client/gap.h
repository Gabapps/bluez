struct gap_handlers {
    void (*onPeriphDiscovered)(GDBusProxy *device);
    void (*onPeriphConnected)(GDBusProxy *device);
    void (*onPeriphPaired)(GDBusProxy *device);
    void (*onPeriphDisconnected)(GDBusProxy *device);
};