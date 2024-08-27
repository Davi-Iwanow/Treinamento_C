CC = arm-none-eabi-gcc
CFLAGS = -g -mcpu=cortex-m4 -mthumb -Wall -O0
OBJDIR = build
RM = rm -f
DEPFLAGS = -MMD -MF $(DEPDIR)/$*.d #criar main.d e .deps
DEPDIR = .deps

#all: startup.o main.o

SRC = $(wilcard *.c)

OBJS = $(addprefix $(OBJDIR)/, $(addsuffix.o, $(basename $(SRC))))
$(shell mkdir -p $(dir $(OBJS))> '/dev/null')

DEPS = $(patsubst %, $(DEPDIR)/%.d, $(basename $(SRC)))
$(shell mkdir -p $(dir $(DEPS))> '/dev/null')

all: $(OBJS)

$(OBJDIR)/ %.o: %.c $(DEPDIR)/%.d
	$(CC) -c $(CFLAGS) $(DEPFLAGS)$< -o $@

$(DEPS):
include $(DEPS)

clean:
	$(RM) $(OBJDIR) $(DEPDIR)
