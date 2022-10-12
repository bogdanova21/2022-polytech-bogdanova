Какой процесс имеет наименьший идентификатор?

```
$ ps -Ao pid,comm --sort=pid | head -n 2
  PID COMMAND
    1 systemd
```
Какой идетификтор у вашего текущего shell-процесса?
```
$ ps -p $$
    PID TTY          TIME CMD
   5930 pts/0    00:00:18 zsh
```
Сколько всего запущено процессов?
```
$ ps -A | wc -l
257
```