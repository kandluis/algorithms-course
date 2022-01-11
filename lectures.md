---
layout: page
title: Lectures
description: Detailed lecture information
nav_order: 1
---

## General Lecture Information

Lecture will be held in-person in Graham Hall 210. The course staff wil make an effort to make lecture recordings available. If you cannot attend lecture, it will be broadcast on [Zoom](https://ncat.zoom.us/s/99432621515?pwd=WmNzUWp4N1liSGZzWTBrQWZOMUlhZz09). However, lectures are optimized for in-class experience.  

Recordings for the lectures will be posted here as part of the Lecture resources when available.

## Lectures

{% assign lectures = site.lectures %}
{% for lecture in lectures %}
{{ lecture }}
{% endfor %}