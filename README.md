# Programare Orientată pe Obiecte


## Prerequisites

Ensure you have Docker and Docker Compose installed on your system.

## Setup and Run

1. **Build the Docker image**

   You can build the Docker image using Docker Compose with the following command:

   ```bash
   docker-compose build
This command will pull the latest Ubuntu image, install MPICH and bash, and set up the working directory.

2. **Start the Docker container**

   After the image has been built, you can start the Docker container with the following command:

   ```bash
   docker-compose up -d
    ```
   This command will pull the latest Ubuntu image, install MPICH and bash, and set up the working directory.


3. **Compile the program**

   To compile your  program, you can execute the following command:

   ```bash
   docker exec -it poo-gcc_container bash -c "g++ -o building building.cpp"
    ```

2. **Run the program**

   You can then run your program by using the following command:

   ```bash
   docker exec -it poo-gcc_container bash -c "./building"
    ```
   This command will run the home_exercise_3_1 program with 12 processes.


### Exempluri
- [Square 5.](exercises/square.cpp)
- [Template 6.](exercises/template.cpp)
- [Stroka 8.](exercises/stroka.cpp)
- [Class hierarchy 9.](exercises/building.cpp)
- [Ten Elements Array  10.](exercises/tenelementsarray.cpp)