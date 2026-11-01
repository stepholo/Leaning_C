# Define the compiler
CC = gcc
CFLAGS = -Wall -Wextra -O2 -g

# Target executable name
TARGET = ex1301

# List your source files
SRCS = ex1301.c

# Generate object file names from source files
OBJS = $(SRCS:.c=.o)

# Default rule (runs when you type 'make')
all: $(TARGET)
LDLIBS += -lm

# Link object files to create the executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET) $(LDLIBS)

# Compile source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up build files
clean:
	rm -f $(OBJS) $(TARGET)

# Run the program
run:
	./$(TARGET)
