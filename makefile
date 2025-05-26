# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror
LDFLAGS = 

# Targets
TARGET = ABC.exe
OBJS = big2.o fact.o

# Default rule
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET) $(LDFLAGS)

# Pattern rule for object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rule
clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: clean
