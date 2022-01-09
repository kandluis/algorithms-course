---
layout: page
title: Staff - Student Hours
description: A listing of all the course staff members.
---

# Student Hours

- Student hours schedule can be found on the [COMP 285 Calendar](https://calendar.google.com/calendar/embed?src=m5m78scf7panucng0a3fpdstik%40group.calendar.google.com&ctz=America%2FNew_York).
- Student hours will take place mostly in-person, on-campus. However, a few select office hours will be made available through Zoom


## Regular Student Hours
TAs will open up their schedule to help students. Different TAs may have different ways of working through students (i.e., in groups or 1 at a time). If the location is getting too crowded, the TA may ask groups of students to work together and ask them to switch rooms. Students can work together while waiting for assistance during student hours.

# Staff Contact

- The best way to reach the staff is by making a private post on [Piazza](https://piazza.com/north_carolina_at_state_university/spring2022/comp285/home).

- You may also reach Professor Perez by emailing him directly at [laperez@ncat.edu](mailto:laperez@ncat.edu) with any questions or concerns that you do not with to post to [Piazza](https://piazza.com/north_carolina_at_state_university/spring2022/comp285/home).

## Instructors

{% assign instructors = site.staffers | where: 'role', 'Instructor' %}
{% for staffer in instructors %}
{{ staffer }}
{% endfor %}

{% assign teaching_assistants = site.staffers | where: 'role', 'Teaching Assistant' %}
{% assign num_teaching_assistants = teaching_assistants | size %}
{% if num_teaching_assistants != 0 %}

## Teaching Assistants

{% for staffer in teaching_assistants %}
{{ staffer }}
{% endfor %}
{% endif %}
