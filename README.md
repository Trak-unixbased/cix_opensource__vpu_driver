# CIX OpenSource VPU Driver

**Dépôt GitHub :** [https://github.com/Trak-unixbased/cix_opensource__vpu_driver](https://github.com/Trak-unixbased/cix_opensource__vpu_driver)

## 📌 Nom du projet
**CIX OpenSource VPU Driver** (ou *cix_opensource__vpu_driver*)

## 💡 À quoi sert ce projet ?
Ce projet fournit le pilote open source pour l'unité de traitement vidéo (VPU - *Video Processing Unit*) des plateformes matérielles CIX (telles que le CIX P1). 

Il se présente sous la forme d'un module noyau Linux "Out-Of-Tree" (OOT), généralement identifié sous le nom `amvx.ko`. Son rôle est d'activer l'accélération matérielle pour l'encodage et le décodage vidéo. En déléguant ces tâches lourdes au VPU, ce pilote permet de soulager le processeur central (CPU), de réduire la consommation d'énergie et d'améliorer considérablement les performances multimédias sur les systèmes compatibles.

## 🛠️ Prérequis
Avant de pouvoir compiler et utiliser ce pilote, votre système (de type Debian/Ubuntu) doit disposer des éléments suivants :

- Un environnement Linux fonctionnel (avec une version de noyau compatible).
- Les outils de compilation de base (`make`, `gcc`, etc.).
- Les en-têtes du noyau (headers) correspondant à votre version actuelle.

Pour installer ces prérequis, vous pouvez exécuter la commande suivante :
```bash
sudo apt update
sudo apt install build-essential linux-headers-$(uname -r)
```

## 🚀 Installation

### Méthode 1 : Installation classique (`make install`)
Si vous souhaitez compiler et installer le module directement sur votre système, exécutez les commandes suivantes à la racine du dépôt :

1. Compilez le module :
   ```bash
   make
   ```
2. Installez le module dans les répertoires de votre noyau :
   ```bash
   sudo make modules_install
   # (ou 'sudo make install' selon la configuration du Makefile)
   ```
3. Mettez à jour la liste des dépendances des modules et chargez-le :
   ```bash
   sudo depmod -a
   sudo modprobe amvx
   ```

### Méthode 2 : Création d'un paquet `.deb` (Alternative propre)
Si vous ne voulez pas faire de `make install` afin de garder un système propre et de gérer le pilote via votre gestionnaire de paquets (`apt`/`dpkg`), vous pouvez facilement générer un paquet `.deb` grâce à l'outil `checkinstall`.

1. Installez l'utilitaire `checkinstall` s'il n'est pas déjà présent :
   ```bash
   sudo apt install checkinstall
   ```
2. Compilez le projet normalement :
   ```bash
   make
   ```
3. Générez le paquet `.deb` :
   ```bash
   sudo checkinstall --pkgname=cix-vpu-driver --pkgversion="1.0" --nodoc make modules_install
   ```

**Résultat :** L'outil va intercepter les fichiers qui auraient dû être installés par la commande `make modules_install` et va les empaqueter dans un fichier `.deb` directement dans votre dossier actuel. Vous pourrez ensuite partager ce fichier ou le désinstaller proprement plus tard via un simple `sudo apt remove cix-vpu-driver`.
