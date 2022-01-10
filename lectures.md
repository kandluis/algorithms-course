---
layout: page
title: Lectures
description: Detailed lecture information
nav_order: 1
---

## General Lecture Information

Lecture will be held in-person in Graham Hall 210. The course staff wil make an effort to make lecture recordings available (likely through Zoom). Zoom links can be found on [Blackboard](https://blackboard.ncat.edu/webapps/blackboard/execute/modulepage/view?course_id=_3567742_1). 

Lectures that are recorded can be accessed on the course site or [Blackboard](https://blackboard.ncat.edu/webapps/blackboard/execute/modulepage/view?course_id=_3567742_1).

## Lectures

{% assign lectures = site.lectures %}
{% for lecture in lectures %}
{{ lecture }}
{% endfor %}