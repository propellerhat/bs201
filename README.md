# Breaking Software 201

## Install
Run the following:

```bash
git clone https://github.com/propellerhat/bs201.git
cd bs201
chmod +x setup.sh
sudo ./setup.sh
```

Several tools are compiled from source, so be patient. It could take a while.

## Exercises

### Compile `func_call_example.c` using `gcc_unsafe`
 * Use your favorite disassembler to inspect main.
 * Locate the call to `func()`.
 * What do you notice about the way arguments are passed to functions in ARM?
 * How does this differ from x86 cdecl (the calling convention in bs101)?
 * Locate the call to `five_arg_func()`.
 * What is difference between this and `func()`?
 * What kind of issues do you think this causes when performing ret to lib style attacks? Think about how the arguments are sent to functions and how it makes attacks easy.
### Compile `vuln_copy.c` using `gcc_unsafe`
 * Crash the progam.
 * Divert control flow to `interesting_func()`.
 * Practice divertinvg control flow to a library function. Divert to `exit()`. If you are successful, what should you notice? How can you check to see if you've performed the 'attack' successfully? Where does this side effect that you are observing come from?
 * Now, something useful. Let's perform a ret to `system()` attack. This is a very useful attack, since it just takes a string argument of the command you want to execute using `sh`.
 * What is the hard part here? How do we get around it? To get around the 'problem,' the attacker usually needs to perform ROP. However, something about this particular sequence of operations lends itself to a shortcut. This challenge can be solved without using ROP.
### If you've successfully exploited `vuln_copy.c`, congrats! Now compile `vuln_copy_hardmode.c`.
 * Looking at the sourcecode, what has changed and why has it removed our shortcut? What do we need to do in order to ret2sys with a command string we control?
 * Read the documentation for `ROPgadget` (installed in the setup.sh script and available by typing `ROPgadget` in the shell). Use it to complete the challenge.
