#include "shell.h"

/**
 * freeall -  freeing all allocated memory related to the shell's argument 
 * inventory and associated data structures
 * @arginv: pointer to arguments inventory
 *
 * Return: 0 on success, 1 on failure
 */
int freeall(arg_inventory_t *arginv)
{
	int exit_status;

	if (arginv)
	{
		save_alias(arginv);
		file_history(arginv);
		free_history(arginv->history);
		free(arginv->history_file);
		free_environ(arginv->envlist);
		free_alias(arginv->alias);
		free(arginv->alias_file);
		if (arginv->input_commands)
			free(arginv->input_commands);
		exit_status = arginv->exit_status;
		free(arginv);
	}
	return (exit_status);
}

/**
 * free_alias - function to free all memory used by alias linked list
 * @head: head of alias
 *
 * Return: 0 on success, 1 on failure
 */
int free_alias(alias_t *head)
{
	alias_t *temp = head;

	while (head)
	{
		temp = temp->next;
		free(head->alias);
		free(head->command);
		free(head);
		head = temp;
	}

	return (EXT_SUCCESS);
}

/**
 * free_environ - function to free memory used by the custom environment 
 * variable linked list.
 * @head: head of custom _environ
 *
 * Return: 0 on success, 1 on failure
 */
int free_environ(env_t *head)
{
	env_t *temp = head;

	while (head)
	{
		temp = temp->next;
		free(head->var);
		free(head->val);
		free(head);
		head = temp;
	}

	return (EXT_SUCCESS);
}

/**
 * free_history - function to free memory used by the command history
 * linked list.
 * @head: history linked list
 *
 * Return: 0 on success, 1 on failure
 */
int free_history(history_t *head)
{
	history_t *temp = head;

	while (head)
	{
		temp = temp->next;
		free(head->command);
		free(head);
		head = temp;
	}

	return (EXT_SUCCESS);
}
