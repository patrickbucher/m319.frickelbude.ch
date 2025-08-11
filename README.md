# Setup

Create Hugo site with module:

```sh
hugo new site m319.frickelbude.ch
cd m319.frickelbude.ch
hugo mod init m319.frickelbude.ch
```

Extend `hugo.toml`:

```toml
baseURL = 'https://m319.frickelbude.ch'
languageCode = 'de-ch'
title = 'Modul 319: Applikationen entwerfen und implementieren'

[module]
[[module.imports]]
path = 'github.com/McShelby/hugo-theme-relearn'
```

Install dependencies:

```sh
hugo mod tidy
```
