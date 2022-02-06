# COMP 285: Analysis of Algorithms Site

This repo contains the course website for COMP 285: Analysis of Algorithms at North Carolina A&T University for Spring 2022. The course website is based off [Just the Class](https://github.com/kevinlin1/just-the-class/generate) by Kevin Lin, and adapted,


## Getting Started for Local Development

Getting started with the repo is simple. The site is built for [Jekyll](https://jekyllrb.com), a static site generator. The site requires no additional special Jekyll plugins and runs on the standard Github Pages Jekyll compiler.

1. Follow the GitHub documentation for [Setting up your GitHub Pages site locally with Jekyll](https://help.github.com/en/articles/setting-up-your-github-pages-site-locally-with-jekyll).
2. Start your local Jekyll server.
```bash
$ bundle exec jekyll serve
```
3. Point your web browser to [http://localhost:4000](http://localhost:4000)
4. Reload your web browser after making a change to preview its effect.

For more information, refer to [Just the Docs](https://pmarsceill.github.io/just-the-docs/).


### Tips and Tricks

I had to run `bundle update` first before I could successfully install the gems required to run `Jekyll` locally.

When instally `Jekyll`, I installed locally using:

```sh
$ gem install --user-install bundler jekyll
```

## Getting Started with LaTeX for Lectures and Homework

Under the `assets/` directory, you'll find multiple files covering lecture notes as well as homework assignments. 

For each `.pdf` file, there's a corresponding TeX file which is compiled using LaTeX. In this section, we explain how to get LaTeX setup so you can successfully compile the source `.tex` files in `.pdf` files.

### Recommended Setup (for Mac OS)
- MacTeX
- Sublime for editor and compilation
- SkimPDF for PDF viewer
- minted package for code

### Install Basic LaTeX Distribution

[Download](https://www.tug.org/mactex/mactex-download.html) and install the latest MacTeX distribution of LaTeX. 

### Setup Sublime for LaTeX Compilation

Download and install [Sublime Text](https://www.sublimetext.com/).

Follow the instructions [here](http://individual.utoronto.ca/dobronyi/latexsublime.html) to set it up to compile LaTeX source files.

### Install `pygmentize`
In order to use the `minted` package, which we use to format and sytax-highlight code in the lecture notes and homework, you must have `pygmentize` installed.

If you don't have it already installed, you'll likely see this error:
```sh
Package minted Error: You must have `pygmentize' installed to use this package.
 have `pygmentize' 
```

To install it, you can use Homebrew:

```sh
brew install Pygments
```

