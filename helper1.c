#include "shell.h"

/**
 * help_alias - provides help and usage information for the "alias" command
 */
void help_alias(void)
{
	_puts("\nUsage: $ alias [NAME]=[VALUE]");
	_puts("\tDefine or display aliases, in the form:");
	_puts("\n\talias [NAME]=[VALUE]");
}

/**
 * help_cd -  provides help and usage information for the "cd" command.
 */
void help_cd(void)
{
	_puts("\nUsage: $ cd");
	_puts("\tChange the shell working directory.");
}

/**
 * help_env - provides help and usage information for the "env" command
 */
void help_env(void)
{
	_puts("\nUsage: $ env");
	_puts("\tDisplay all environmental variables, in the form:");
	_puts("\n\t[NAME]=[VALUE]");
}

/**
 * help_exit -  provides help and usage information for the "exit" command
 */
void help_exit(void)
{
	_puts("\nUsage: $ exit");
	_puts("\tExit the shell.");
}

/**
 * help_help - provides help and usage information for the "help" command
 */
void help_help(void)
{
	_puts("\nUsage: $ help [command]");
	_puts("\tDisplay information about builtin commands.");
}
