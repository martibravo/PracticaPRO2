# Pràctica de PRO2

## Tipus de dades del programa

- **Usuaris**
    - Identificador (`string`)
    - Estadístiques
      - Nombre de problemes que ha intentat resoldre  (`int`)
      - Quants problemes ha solucionat satisfactòriament  (`int`)
      - Quants enviaments ha fet en total.  (`int`)
    - Cursos on s'ha registrat cada usuari 
      - Problemes del curs que pot solucionar perquè compleixen requisits.
- **Problemes**
  - Identificador (`string`)
  - Registre de quants intents s'han fet en aquest problema. (`int`)
  - Quants intents han estat correctes. (`int`)
- **Sessions**
  - Poden estar a un, a cap o a molts cursos, sempre que no coincideixin en un problema amb una altra sessió del mateix curs. 
- **Cursos**
  - Identificador únic `int` entre 1 i N.
  - Format per un conjunt de sessions diferents 
    - Dues sessions del mateix curs no poden compartir cap problema

## Mètodes 