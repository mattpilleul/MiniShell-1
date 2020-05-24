/*
** EPITECH PROJECT, 2019
** proto
** File description:
** proto
*/

#ifndef MINISHELL_H_
#define MINISHELL_H_

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdarg.h>
#include <stdint.h>

#define BOLD "\x1B[1m"
#define BLUE "\x1B[94m"
#define GREEN "\x1B[32m"
#define RED "\x1B[31m"
#define YEL "\x1B[93m"
#define MAJ "\x1B[35m"
#define CYAN "\x1B[36m"
#define RESET "\033[0m"
#define BLACK "\x1b[30m"

void minishell_loop(char **env);
void my_puterror(char *str);
int my_strlen(char const *str);
char *get_next_line(int fd);
int	my_tab_size(char **tab);
int check_first_char(int fd, char *character);
char *control_d(void);
int check_exec(char **tab, char *path);
void check_signal(void);
char *fill_str(char **tab, char *str);
int alpha_check(char c);
void my_cd_old_pwd(char ***env, char *old_pwd, char *pwd);
int cd_command(char **tab, char ***env, char *old_pwd, char *pwd);
int check_for_tab(char **tab, int i, char **pwd, int j);
char *go_for_pwd_remove(char *pwd, int cmp_remove);
int check_correct_path(char *str, char **env);
char *get_correct_path(char *str, char *path, char **env);
char *get_path(char *, char **env);
void minishell(char **tab, char **env, char *path);
int builtins(char **tab, char ***env);
void tab_free(char **tab);
void my_cd_command(char **tab, char ***env);
int get_env(char *name, char **env);
char *my_realloc(char *str, int size);
void go_for_pwd(char ***env, int i, char **tab, char *pwd);
char *go_for_pwd_add(char **tab, char *pwd);
void go_for_old_pwd(char ***env, char *old_pwd, int j);
void go_for_new_pwd(char ***env, char *pwd, int i, int size);
void my_cd_home(char ***env, char *pwd);
char **unsetenv_command(char **tab, char **env);
char **my_setenv(char **tab, char **env);
char **check_for_env(char **env);
int env_display(char **env);
int builtins2(char **tab, char ***env);

#endif /* !MINISHELL_H_ */
