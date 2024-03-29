/* Created by: Piotr Szuberski
 * Mail: p.szuberski@student.uw.edu.pl
 * Project name: Drzewo
 * Subject: IPP
 */

#include <stdio.h>
#include <stdbool.h>
#include "execute.h"
#include "diag.h"

int main(int argc, char **argv) {
    bool diagnose = diagnostic(argc, argv);
    execute(diagnose);
    return 0;
}
