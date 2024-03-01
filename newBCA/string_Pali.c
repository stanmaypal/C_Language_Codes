#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h> // For usleep

// Define constants
#define WIDTH 20
#define HEIGHT 20
#define SNAKE_LENGTH 3
#define UP 'w'
#define DOWN 's'
#define LEFT 'a'
#define RIGHT 'd'

// Function prototypes
void initializeGame();
void drawGame();
void getInput();
void updateGame();
void checkCollision();
void generateFood();
void gameOver();
void clearScreen();

// Global variables
int snakeX[SNAKE_LENGTH], snakeY[SNAKE_LENGTH];
int foodX, foodY;
int score = 0;
char direction = RIGHT;
int gameOverFlag = 0;

int main() {
    initializeGame();

    while (!gameOverFlag) {
        clearScreen();
        drawGame();
        getInput();
        updateGame();
        checkCollision();
        generateFood();
        if (gameOverFlag)
            gameOver();
        // Adjust game speed
        // You can change the sleep duration for speed adjustment
        // for slower game: usleep(300000);
        // for faster game: usleep(100000);
        // or any value as per your preference
        usleep(200000);
    }

    return 0;
}

void initializeGame() {
    // Initialize snake position
    for (int i = 0; i < SNAKE_LENGTH; i++) {
        snakeX[i] = WIDTH / 2;
        snakeY[i] = HEIGHT / 2;
    }

    // Generate initial food
    generateFood();
}

void drawGame() {
    // Draw top wall
    for (int i = 0; i < WIDTH + 2; i++)
        printf("#");
    printf("\n");

    // Draw the map
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (j == 0)
                printf("#");

            int isSnakeBody = 0;
            for (int k = 0; k < SNAKE_LENGTH; k++) {
                if (snakeX[k] == j && snakeY[k] == i) {
                    printf("O");
                    isSnakeBody = 1;
                }
            }

            if (j == foodX && i == foodY)
                printf("F");
            else if (!isSnakeBody)
                printf(" ");

            if (j == WIDTH - 1)
                printf("#");
        }
        printf("\n");
    }

    // Draw bottom wall
    for (int i = 0; i < WIDTH + 2; i++)
        printf("#");
    printf("\n");

    // Print score
    printf("Score: %d\n", score);
}

void getInput() {
    if (kbhit()) {
        char key = getchar();
        if (key == UP || key == DOWN || key == LEFT || key == RIGHT)
            direction = key;
    }
}

void updateGame() {
    // Move the snake
    for (int i = SNAKE_LENGTH - 1; i > 0; i--) {
        snakeX[i] = snakeX[i - 1];
        snakeY[i] = snakeY[i - 1];
    }

    switch (direction) {
        case UP:
            snakeY[0]--;
            break;
        case DOWN:
            snakeY[0]++;
            break;
        case LEFT:
            snakeX[0]--;
            break;
        case RIGHT:
            snakeX[0]++;
            break;
    }
}

void checkCollision() {
    // Check if snake hits the wall
    if (snakeX[0] < 0 || snakeX[0] >= WIDTH || snakeY[0] < 0 || snakeY[0] >= HEIGHT)
        gameOverFlag = 1;

    // Check if snake hits itself
    for (int i = 1; i < SNAKE_LENGTH; i++) {
        if (snakeX[0] == snakeX[i] && snakeY[0] == snakeY[i])
            gameOverFlag = 1;
    }

    // Check if snake eats food
    if (snakeX[0] == foodX && snakeY[0] == foodY) {
        score += 10;
        generateFood();
        // Increase snake length
        SNAKE_LENGTH++;
    }
}

void generateFood() {
    srand(time(NULL));
    foodX = rand() % WIDTH;
    foodY = rand() % HEIGHT;
}

void gameOver() {
    clearScreen();
    printf("Game Over!\n");
    printf("Your Score: %d\n", score);
}

void clearScreen() {
    system("clear");
}
