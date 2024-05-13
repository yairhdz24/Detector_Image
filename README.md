# 🔐 Sistema de Dispensador de comida con Facial con IA
### Este proyecto consiste en un sistema dispensador de comida para perros que tiene una autenticación que utiliza inteligencia artificial para comparar el rostro para confirmar que se trate de un perro. Una vez autenticado, habra un mecanismo con un esp32 y un servomotor para comenzar a liberar la comida.

# 🚀 Funcionalidades
- ### Este proyecto consiste en un sistema de autenticación que utiliza inteligencia artificial para comparar el rostro y sea la de un perro y de un esp32 mas servomotor para la funcionalidad del dispensador. Una vez autenticado, comienza a liberarse la comida.
- ### Acceso Seguro: Solo los rostros reconocidos como perros podran acceder.
# 💻 Tecnologías Utilizadas
### De momento nigunaaA xd 

# 🧩 Materiales
* Placa de desarrollo ESP32
* Servo Motor SG90
* Protoboard
* Mínimo 3 cables macho macho
* Cable USB a micro USB
* IDE Arduino
* Computadora
* Materiales para crear el dispensador

# 💡 Pasos para configurar placa ESP32

### Conectar cables macho-macho a servomotor
Lo primero que haremos sera conectar tres cables a nuestro servo motor (de preferencia que sean del mismo color que los que este tiene)

![cables](https://github.com/yairhdz24/Detector_Image/assets/157530840/d801fca0-5481-4aff-9f99-2fbe034b93f7)
![servo](https://github.com/yairhdz24/Detector_Image/assets/157530840/3f309f2b-e77c-4f01-972e-73106ea6c8cb)

### Conectar cables macho-macho a placa ESP32
Una vez que conectamos los cables a nuestro servo motor ahora los tenemos que conectar a nuestra placa, en este caso tenemos tres colores de cables, café (cable que va a GND o tierra), rojo (cable de alimentación va al pin VIN que es el pin que recibe la alimentación de energía para la placa), y por último el naranja (cable para conectar con el pin digital para generar la señal en nuestro caso usamos el pin 13) 

![placa](https://github.com/yairhdz24/Detector_Image/assets/157530840/3462bec3-e0ef-448b-9240-4b141c16b6e0)

### Cargar código a placa ESP32
Ya que tenemos nuestro servo motor a conectado a la placa es momento de cargar nuestro código, para esto vamos a conectar nuestra placa a través del cable micro USB a nuestra computadora, abriremos nuestro IDE de arduino donde añadiremos el código que vamos a cargar, seleccionamos la placa correspondiente que en nuestro caso es la placa ESP32-WROOM-DA Module y cargamos el código a nuestra placa desde nuestro IDE.

![Captura de pantalla 2024-05-13 103451](https://github.com/yairhdz24/Detector_Image/assets/157530840/addb31b8-b45b-4309-a466-01d04170db8b)


### Probando que funciona
Una vez que ya configuramos la placa podemos acceder al control de esta a través de la IP estática que le asignamos en nuestro código, solo tenemos que tener en cuenta que el dispositivo desde el cual vamos a controlar el alimentador tiene que estar conectado a la misma red en la cual configuramos el código para nuestra placa.
![funcional](https://github.com/yairhdz24/Detector_Image/assets/157530840/5efb99f8-4f31-4a58-8dff-05ef0ca462d2)


# 👥 Integrantes
- ### Yair Hernandez Ochoa🧑‍💻
- ### Kevin Ramses Ramirez Gomez🧑‍💼
- ### Kevin Shalom Herrera Covarrubias🧑‍💼
- ### Judith Baudelia Villalvazo Marin 👩‍💻
